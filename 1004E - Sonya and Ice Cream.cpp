// https://codeforces.com/problemset/problem/1399/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <map>
#include <queue>
#define p1 first
#define p2 second
#define pii pair<int,int> 
#define MXINT (1<<30)

typedef long long ll;
using namespace std;

bool cmp(pii a, pii b) {
	return -a.p2 < -b.p2;
};


vector<vector<pii>> g;
vector<bool> vis;
vector<int> l, r, p;
vector<pii> s;
//vector<pi> s;

int dfs(int u) {
	pii v;
	int x, mx = 0, mxv = -1, pth, mxp = u;
	vis[u] = 1;
	for (int i = 0; i < g[u].size(); ++i) {
		v = g[u][i];
		if (vis[v.p1]) continue;
		pth = dfs(v.p1);
		x = v.p2 + r[v.p1];
		if (x > mx) {
			mx = x;
			mxv = v.p1;
			mxp = pth;
		}
	}
	r[u] = mx;
	p[u] = mxv;
	return mxp;
};

int dfs2(int u) {
	pii v;
	int x, mx = 0;
	vis[u] = 0;
	for (int i = 0; i < g[u].size(); ++i) {
		v = g[u][i];
		if (!vis[v.p1]) continue;
		x = dfs2(v.p1) + v.p2;
		if (x > mx) mx = x;
	}
	l[u] = mx;
	return mx;
}

int fc(int u) {
	int v = p[u];
	if (max(l[u], r[u]) < max(l[v], r[v])) return u;
	else return fc(v);
}

int dfs3(int u) {
	pii v;
	int x, mx = 0, mxv = -1;
	vis[u] = 1;
	for (int i = 0; i < g[u].size(); ++i) {
		v = g[u][i];
		if (vis[v.p1]) continue;
		p[v.p1] = u;
		l[v.p1] = i;
		x = dfs3(v.p1) + v.p2;
		if (x > mx) {
			mx = x;
			mxv = v.p1;
		}
	}
	if (p[u] != -1) s[u] = make_pair(u, mx + g[p[u]][l[u]].p2);
	return mx;
}

int main() {
	int n, k, u, v, d, x, y, z;
	scanf("%d%d", &n, &k);
	g.resize(n + 1);
	vis.resize(n + 1, 0);
	l.resize(n + 1, 0);
	r.resize(n + 1, 0);
	p.resize(n + 1, 0);
	s.resize(n + 1);
	for (int i = 1; i < n; ++i) {
		scanf("%d%d%d", &u, &v, &d);
		g[u].push_back(pii(v, d));
		g[v].push_back(pii(u, d));
	}

	if (n == 1) {
		printf("0\n");
		return 0;
	}
	else if (n == 2) {
		printf("%d\n", g[1][0]);
		return 0;
	}

	for (int i = 1; i <= n; ++i) {
		if (g[i].size() == 1) {
			x = i;
			break;
		}
	}
	y = dfs(x);
	dfs2(y);
	z = fc(x);
	p[z] = -1;
	dfs3(z);
	sort(s.begin(), s.end(), cmp);

	pii vec;
	bool flag = 1;
	x = s[0].p2;
	for (int i = 0; i < s.size() && --k; ++i) {
		vec = s[i];
		if (vis[p[vec.p1]]) {
			if (p[vec.p1] == z && flag) flag = 0;
			else vis[p[vec.p1]] = 0;
			x = s[i+1].p2;
		}
		else break;
	}
	printf("%d\n", x);
	return 0;
}