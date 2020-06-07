// https://codeforces.com/problemset/problem/200/B
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
	int c=0, t=0, x;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &x);
		c += x;
		t += 100;
	}
	printf("%lf", 100.0*c/t);
}