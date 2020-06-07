// https://codeforces.com/problemset/problem/339/B
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

typedef long long ll;
using namespace std;

int main() {
	int n, m, x;
	scanf("%d%d", &n, &m);
	int c = 1;
	ll res = 0;
	for (int i = 0; i < m; ++i) {
		scanf("%d", &x);
		if (x > c) res += x - c;
		else if (c > x) res += n - c + x;
		c = x;
	}
	printf("%I64d\n", res);
	return 0;
}