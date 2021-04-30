// 1469C - Building a Fence
// https://codeforces.com/problemset/problem/1469/C
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <map>
#include <string>
#include <cmath>
#include <queue>

#define p1 first
#define p2 second
#define pii pair<int,int>
#define vii vector<vector<int>>
#define vi vector<int>
#define vb vector<bool>
#define MXINT (1<<30)
#define MXLL (1LL<<60)
#define sz size
#define rsz resize
typedef long long ll;
using namespace std;


int main() {
	int t, n, x, y, z, c, k, j;
	ll d;
	pair<ll, ll> a, b;
	bool f = 1;
	vector<ll> h, r;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &k);
		h.rsz(n);
		r.rsz(n);
		for (int i = 0; i < h.sz(); ++i) scanf("%I64d", &h[i]);
		r[0] = h[0];
		f = 1;
		for (int i = 1; i < h.sz() - 1; ++i) {
			if (h[i + 1] > h[i]) d = h[i] + min(h[i + 1] - h[i], k - 1LL);
			else d = h[i];
			a = make_pair(r[i - 1] + 1, r[i - 1] + k);
			b = make_pair(d + 1, d + k);
			if (a.p2 < b.p1) r[i] = max(h[i], a.p2 - 1);
			else if (a.p1 > b.p2) r[i] = min(h[i] + k - 1, a.p1 - k);
			else r[i] = d;
			if (abs(r[i] - r[i - 1]) > k - 1LL) { f = 0; break; }
		}
		if (abs(h[n - 1] - r[n - 2]) > k - 1LL) f = 0;
		if (f) printf("YES\n");
		else printf("NO\n");

	}
	return 0;
}