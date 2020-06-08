// https://codeforces.com/problemset/problem/1352/A
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
	int tc, n;
	scanf("%d", &tc);
	for (int _tc = 0; _tc < tc; ++_tc) {
		scanf("%d", &n);
		int ct = 0;
		for (int i = n; i != 0; i /= 10)
			if (i % 10) ++ct;
		printf("%d\n", ct);
		int d = 0;
		for (int i = n; i != 0; i /= 10) {
			int j = pow(10, d);
			if (i % 10) printf("%d\n", (i % 10)*j);
			++d;
		}
	}
	return 0;
}