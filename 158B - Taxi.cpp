// https://codeforces.com/problemset/problem/158/B
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
	int n, x, mn=0;
	scanf("%d", &n);
	vector<int> v(5);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &x);
		++v[x];
	}
	mn += v[4];
	mn += v[3];
	v[1] -= v[3];
	mn += v[2] / 2;
	v[2] = v[2] % 2;
	if (v[2] == 1) {
		v[1] -= 2;
		++mn;
	}
	if (v[1] > 0) {
		mn += v[1] / 4 + (v[1] % 4 ? 1 : 0);
	}
	printf("%d\n", mn);
	return 0;
}