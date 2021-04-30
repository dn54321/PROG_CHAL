// https://codeforces.com/problemset/problem/289/B
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

#define p1 first
#define p2 second
#define pii pair<int,int> 
#define vii vector<vector<int>>
#define vi vector<int>
#define MXINT (1<<30)
#define sz size
typedef long long ll;
using namespace std;

vi s;

int fi(int x, int d) {
	int res = 0;
	for (int i = 0; i < s.sz(); ++i) {
		res += abs((s[i] - x) / d);
	}
	return res;
}

int main() {
	int x, y, z, a, b, d, m, n, mn = MXINT, mx = 0, t, l, r;
	scanf("%d%d%d", &n, &m, &d);
	n = n * m;
	s.resize(n);
	a = -1;
	for (int i = 0; i < n; ++i) {
		scanf("%d", &s[i]);
		if (a == -1) a = s[i] % d;
		else if (s[i] % d != a) { printf("-1\n"); return 0; }
		mn = min(mn, s[i]);
		mx = max(mx, s[i]);
	}
	x = MXINT;
	for (int i = mn; i <= mx; i += d) {
		x = min(x, fi(i, d));
	}
	printf("%d\n", x);
	return 0;
}