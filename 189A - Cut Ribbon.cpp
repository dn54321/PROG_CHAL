// https://codeforces.com/problemset/problem/189/A
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

vector<int> dp;

int dpf(int n,int a,int b,int c) {
	if (n < 0) return -MXINT;
	if (dp[n] != -1) return dp[n];
	else {
		int x = dpf(n - a, a, b, c);
		int y = dpf(n - b, a, b, c);
		int z = dpf(n - c, a, b, c);
		dp[n] = 1 + max(max(x, y), z);
	}
	return dp[n];
}

int main() {
	int n, a, b, c;
	scanf("%d%d%d%d", &n, &a, &b, &c);
	dp.resize(n+1,-1);
	dp[0] = 0;
	int res = dpf(n,a, b, c);
	printf("%d", res);
	return 0;
}