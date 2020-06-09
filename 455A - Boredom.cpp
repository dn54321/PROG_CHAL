// https://codeforces.com/problemset/problem/455/A
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
#define MXINT (1<<30)
typedef long long ll;
using namespace std;
vector<vector<ll>> dp(100001);

int main() {
	vector<ll> dp(100001);
	vector<int> f(100001, 0);
	int n,x;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &x);
		++f[x];
	}
	dp[0] = f[0];
	dp[1] = max(f[1], f[0]);
	for (int i = 2; i < 100001; ++i) {
		dp[i] = max(dp[i - 1], dp[i - 2] + 1LL*i*f[i]);
	}
	printf("%I64d\n", dp[100000]);
	return 0;
}