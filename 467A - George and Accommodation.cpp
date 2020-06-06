// https://codeforces.com/problemset/problem/467/A
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
	int n,p,q, res=0;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d%d", &p, &q);
		if (q - p > 1) ++res;
	}
	printf("%d\n", res);
	return 0;
}