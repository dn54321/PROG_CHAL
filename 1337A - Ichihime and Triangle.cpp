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
	int t, a, b, c, d;
	scanf("%d", &t);
	for (int tc = 0; tc < t; ++tc) {
		scanf("%d%d%d%d", &a, &b, &c, &d);
		printf("%d %d %d\n", b, c, c);
	}
	return 0;
}