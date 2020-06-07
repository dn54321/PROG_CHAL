// https://codeforces.com/problemset/problem/492/B
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
	int n, l;
	double mx;
	scanf("%d%d", &n, &l);
	vector<int> v(n);
	for (int i = 0; i < n; ++i) scanf("%d", &v[i]);
	sort(v.begin(), v.end());
	if (l == 1) mx = max(v[0], l - v[0]);
	else {
		mx = max(v[0], l - v[n - 1]);
		for (int i = 1; i < n; ++i) {
			mx = max((v[i] - v[i - 1]) / 2.0, mx);
		}
	}
	printf("%.9lf", mx);
	return 0;
}