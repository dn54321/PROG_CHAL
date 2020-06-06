// https://codeforces.com/problemset/problem/318/A
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
	ll n, k;
	scanf("%I64d %I64d", &n, &k);
	ll e = n / 2;
	ll o = e + (n % 2 ? 1 : 0);
	if (k <= o) printf("%I64d\n", k * 2 - 1);
	else printf("%I64d\n", (k - o) * 2);

	return 0;
}