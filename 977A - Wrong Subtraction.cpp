// https://codeforces.com/problemset/problem/977/A
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
	int n, k;
	scanf("%d%d", &n, &k);
	for (int i = 0; i < k; ++i) {
		if (n % 10 != 0) --n;
		else n = n / 10;
	}
	printf("%d", n);

	return 0;
}