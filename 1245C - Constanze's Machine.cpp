// https://codeforces.com/contest/1245/problem/C
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

vector<ll> dp(100001, 1);
ll d(int i) {
	if (i < 0) return 0;
	return dp[i];
}

void fdp() {
	for (int i = 2; i < 100001; ++i)
		dp[i] = ((d(i - 2) << 1) + d(i - 3)) % 1000000007LL;

}


int main() {
	ll x, y, z, a, b, m, n, mn, mx, t, l, r;
	string s;
	fdp();
	cin >> s;
	x = 1;

	for (int i = 0; i < s.sz(); ++i)
		if (s[i] == 'w' || s[i] == 'm') {
			x = 0;
			break;
		}
		else {
			char c = 0;
			n = 1;
			if (s[i] == 'u') c = 'u';
			if (s[i] == 'n') c = 'n';
			while (i + 1 < s.sz() && s[i + 1] == c) {
				++n;
				++i;
			}
			x = (x * dp[n]) % 1000000007LL;
		}
	cout << x << "\n";
	return 0;
}