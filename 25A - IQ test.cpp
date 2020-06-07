// https://codeforces.com/problemset/problem/25/A
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
	int n,a,b,c;
	bool odd = 0;
	scanf("%d%d%d%d", &n,&a,&b,&c);
	if (a % 2 == b % 2) {
		if (a % 2) odd = 1;
	}
	else if (a % 2 == c % 2) {
		printf("2\n");
		return 0;
	}
	else {
		printf("1\n");
		return 0;
	}
	if (c % 2 != odd) {
		printf("3\n");
		return 0;
	}

	for (int i = 3; i < n; ++i) {
		scanf("%d", &a);
		if (a % 2 != odd)
			printf("%d\n", i + 1);
	}

	return 0;
}