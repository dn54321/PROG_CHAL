// https://codeforces.com/problemset/problem/1335/B
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
#define vvi vector<vector<int>>
#define MXINT (1<<30)
typedef long long ll;
using namespace std;


int main() {
	int tc, x, sz, ss, d;
	scanf("%d", &tc);
	for (int t = 0; t < tc; ++t) {
		scanf("%d%d%d", &sz, &ss, &d);
		int ct = 0;
		for (int i = 0; i < sz; ++i) {
			printf("%c", 'a' + ct);
			++ct;
			if (ct == d) ct = 0;
		}
		printf("\n");
	}
	return 0;
}