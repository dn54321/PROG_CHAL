// https://codeforces.com/problemset/problem/313/B
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>

#define p1 first
#define p2 second
#define pii pair<int,int> 
#define MXINT (1<<30)

typedef long long ll;
using namespace std;


int main() {
	int n, x, y;
	char s[100001];
	vector<int> dp(100001);
	scanf("%s", s);
	scanf("%d", &n);
	int l = strlen(s);
	dp[0] = 0;
	for (int i = 1; i < l; ++i) {
		if (s[i] == s[i-1]) dp[i] = 1 + dp[i - 1];
		else dp[i] = dp[i - 1];
	}
	for (int i = 0; i < n; ++i) {
		scanf("%d%d", &x, &y);
		printf("%d\n", dp[y-1] - dp[x-1]);

	}

	return 0;
}