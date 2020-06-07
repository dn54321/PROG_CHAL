// https://codeforces.com/problemset/problem/144/A
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
	int mn = 101, mx = 0;
	int mni, mxi,x;
	for (int i = 0; i < n; ++i) {
		scanf("%d", &x);
		if (mn >= x) {
			mn = x;
			mni = i;
		}
		if (mx < x) {
			mx = x;
			mxi = i;
		}
	}
	int res = mxi + n - mni - 1;
	if (mxi > mni) --res;
	printf("%d", res);

	return 0;
}