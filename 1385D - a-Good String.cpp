// https://codeforces.com/problemset/problem/1385/D
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
#define rsz resize
typedef long long ll;
using namespace std;

vector<char> s;

int cst(char c, int l, int r) {
	int n = 0;
	for (int i = l; i < r; ++i)
		if (s[i] != c) ++n;
	return n;
}
int fi(int i, int j) {
	if (i == 1) return 0;
	if (j % 2) return j - 1;
	else return j + 1;
}
int main() {
	int x, y, z, a, b, m, n, mn, mx, t, l, r;
	char c;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		s.resize(n);
		getchar();
		for (int i = 0; i < n; ++i) scanf("%c", &s[i]);
		int lg = log2(n);
		vii dp(lg + 1);
		for (int i = 0; i <= lg; ++i) dp[i].rsz(1 << i);
		for (int i = 1; i <= lg; ++i) {
			a = 1 << i, c = 'a' - 1 + i;
			l = n >> i;
			for (int j = 0; j < a; ++j) {
				y = i - 1 ? fi(i, j >> 1) : 0;
				dp[i][j] = dp[i - 1][y] + cst(c, l * j, l * (j + 1));
			}
		}
		mn = MXINT;
		for (int i = 0; i < n; ++i)
			mn = min(mn, dp[lg][i] + 1 - (s[fi(lg + 1, i)] == 'a' + lg));
		printf("%d\n", mn);

	}
	return 0;
}