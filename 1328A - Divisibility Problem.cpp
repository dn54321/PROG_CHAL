// https://codeforces.com/problemset/problem/1328/A
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
	int n,a,b;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d%d", &a, &b);
		int c = a % b;
		if (!c) printf("0\n");
		else printf("%d\n", b - c);
	}
	return 0;
}