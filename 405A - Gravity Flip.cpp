// https://codeforces.com/problemset/problem/405/A
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
	int n;
	scanf("%d", &n);
	vector<int> c(n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &c[i]);
	}
	sort(c.begin(), c.end());
	for (int i = 0; i < n - 1; ++i) {
		printf("%d ", c[i]);
	}
	printf("%d\n", c[n-1]);
}