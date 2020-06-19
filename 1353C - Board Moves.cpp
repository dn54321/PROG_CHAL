// https://codeforces.com/problemset/problem/1353/C
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
	int t, q;
	scanf("%d", &t);
	vector<ll> dp(500000);
	dp[0] = 0;
	for (int i = 1; i < 500000; ++i) {
		dp[i] = 8LL*i*i + dp[i-1];
	}
	for (int i = 0; i < t; ++i) {
		scanf("%d", &q);
		printf("%I64d\n", dp[q/2]);
	}
	return 0;
}