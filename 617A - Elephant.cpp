// https://codeforces.com/problemset/problem/617/A
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
	int n;
	scanf("%d", &n);
	int res = n / 5 + ((n % 5) ? 1 : 0);
	printf("%d", res);

	return 0;
}