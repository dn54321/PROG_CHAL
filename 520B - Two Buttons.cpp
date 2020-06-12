// https://codeforces.com/problemset/problem/520/B
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

vector<int> dp; // cost to get to X;
int find(int n) {
	int cst = MXINT;
	if (!(n % 2)) cst = 1 + dp[n / 2];
	for (int i = n / 2 * 2 + 2; cst > i - n + 1; ++i) {
		int s = i-n, t = i;
		while (t > n && !(t % 2)) {
			t /= 2;
			++s;
		}
		if (t > n) continue;
		if (s + dp[t] < cst) cst = s + dp[t];
	}
	dp[n] = cst;
	return cst;
}

int main() {
	int s, e;
	scanf("%d%d", &s, &e);
	dp.resize(max(s,e)+1, 0);
	for (int i = 1; i <= s; ++i) dp[i] = s - i;
	for (int i = s + 1; i <= e; ++i) find(i);
	printf("%d\n", dp[e]);
	return 0;
}