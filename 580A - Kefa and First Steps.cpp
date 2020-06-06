// https://codeforces.com/problemset/problem/580/A
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
	int n, ct=1, c, t,mx=1;
	scanf("%d %d", &n, &c);

	for (int i = 1; i < n; ++i) {
		scanf("%d", &t);
		if (t >= c) {
			++ct;
			if (mx < ct) mx = ct;
		}
		else {
			ct = 1;
		}
		c = t;
	}
	printf("%d\n", mx);
}