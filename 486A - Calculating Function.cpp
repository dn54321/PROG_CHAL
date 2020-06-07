// https://codeforces.com/problemset/problem/486/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>
#define MXINT 1<<30
typedef long long ll;
using namespace std;

int main() {
	ll n;
	scanf("%I64d", &n);
	ll res = ceil(1.0 * n / 2)*(n%2?-1:1);
	printf("%I64d", res);
	return 0;
}