// https://codeforces.com/problemset/problem/540/A
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

int main() {
	int n, res=0, x;
	char s1[1001], s2[1001];
	scanf("%d %s %s", &n, s1, s2);
	for (int i = 0; i < n; ++i) {
		x = abs(s1[i] - s2[i]);
		res += min(x, 10 - x);
	}
	printf("%d", res);
	return 0;
}