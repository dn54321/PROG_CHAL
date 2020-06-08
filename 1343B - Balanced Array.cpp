// https://codeforces.com/problemset/problem/1343/B
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <map>
#include <utility>

#define p1 first
#define p2 second
#define pii pair<int,int> 
#define MXINT (1<<30)
typedef long long ll;
using namespace std;

int main() {
	int tc,n,sz;
	scanf("%d", &tc);
	for (int t = 0; t < tc; ++t) {
		scanf("%d", &n);
		sz = n / 2;
		if (sz % 2) printf("NO\n");
		else {
			printf("YES\n");
			ll e = sz*(1LL + sz);
			ll o = (sz-1LL)*(-1LL + sz);
			for (int i = 1; i <= sz; ++i) printf("%d ", 2 * i);
			for (int i = 0; i < sz - 1; ++i) printf("%d ", 2 * i + 1);
			printf("%I64d\n", e-o);
		}
	}
	return 0;
}