// https://codeforces.com/problemset/problem/500/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <map>
#include <utility>

#define p1 first
#define p2 second
#define pii pair<int,int>
#define vvi vector<vector<int>>
#define MXINT (1<<30)

typedef long long ll;
using namespace std;

vvi nb;

bool dfs(int s, int d) {
	if (s == d) return true;
	for (int i = 0; i < nb[s].size(); ++i) {
		if (dfs(nb[s][i], d)) return true;
	}
	return false;
}

int main() {
	int n, t, x;
	scanf("%d%d", &n, &t);
	nb.resize(n + 1);
	for (int i = 1; i < n; ++i) {
		scanf("%d", &x);
		nb[i].push_back(i + x);
	}
	if (dfs(1, t)) printf("YES\n");
	else printf("NO\n");
	return 0;
}