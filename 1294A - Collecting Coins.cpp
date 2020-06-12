// https://codeforces.com/problemset/problem/1294/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
	int t,a,b,c,n;
	scanf("%d", &t);
	for (int tc = 0; tc < t; ++tc) {
		scanf("%d%d%d%d", &a, &b, &c, &n);
		int mx = max(max(a, b), c);
		n -= (3 * mx - a - b - c);
		if (n>=0 && !(n % 3)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}