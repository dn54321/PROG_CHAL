// https://codeforces.com/problemset/problem/1374/B
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
	int t, n, k, r;
	scanf("%d", &t);
	while (t--) {
		int ct = 0;
		scanf("%d", &n);
		while (n % 3 == 0) {
			++ct;
			if (n % 2 == 0) n /= 2;
			else ++ct;
			n /= 3;
		}
		if (n == 1) printf("%d\n", ct);
		else printf("-1\n");
	}
	return 0;
}