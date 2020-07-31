// https://codeforces.com/problemset/problem/1374/A
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
#define MXLL (1LL<<60)

typedef long long ll;
using namespace std;


int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int x, y, n, a, k;
		scanf("%d%d%d", &x, &y, &n);
		a = (n - y) / x;
		k = x * a + y;
		printf("%d\n", k);
	}
	return 0;
}