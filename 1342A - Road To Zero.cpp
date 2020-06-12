// https://codeforces.com/problemset/problem/1342/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>

#define p1 first
#define p2 second
#define pii pair<int,int> 
#define MXINT (1<<30)

typedef long long ll;
using namespace std;


int main() {
	int t, x, y, a, b;
	ll c;
	scanf("%d", &t);
	for (int tc = 0; tc < t; ++tc) {
		c = 0;
		scanf("%d%d%d%d", &x, &y, &a, &b);
		if (2*a < b) b = 2*a;
		c += 1LL*min(x, y)*b;
		c += 1LL*abs(y-x)*a;
		printf("%I64d\n", c);
	}
	return 0;
}