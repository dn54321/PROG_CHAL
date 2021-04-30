// https://codeforces.com/problemset/problem/746/D
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <map>

#define p1 first
#define p2 second
#define pii pair<int,int> 
#define MXINT (1<<30)

typedef long long ll;
using namespace std;


int main() {
	int n, k, a, b, c, x;
	char ch[] = { 'G','B' };
	int f = 0;
	scanf("%d%d%d%d", &n, &k, &a, &b);
	if (a > b) { swap(a, b); f = 1; }
	if (b * 1LL > (a + 1LL) * k) {
		printf("NO\n");
		return 0;
	}
	c = b - a;
	while (a || b) {
		if (b) { --b; printf("%c", ch[1 - f]); }
		if (c && b) {
			x = min(c, k - 1);
			b -= x;
			c -= x;
			for (int i = 0; i < x; ++i) printf("%c", ch[1 - f]);
		}
		if (a) { --a; printf("%c", ch[f]); }
	}
	return 0;
}