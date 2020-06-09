// https://codeforces.com/problemset/problem/509/A
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

vvi dp;

int find(int m, int n) {
	if (dp[m][n]) return dp[m][n];
	else if (m == 1 || n == 1) dp[m][n] = 1;
	else dp[m][n] = find(m - 1, n) + find(m, n - 1);
	return dp[m][n];
}

int main() {
	int n;
	scanf("%d", &n);
	dp.resize(n+1);
	for (int i = 0; i <= n; ++i) dp[i].resize(n+1,0);
	printf("%d\n", find(n, n));
	return 0;
}