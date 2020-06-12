// https://codeforces.com/problemset/problem/1337/B
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
	int t,x,n,m;
	scanf("%d", &t);
	for (int i = 0; i < t; ++i) {
		scanf("%d%d%d", &x, &n, &m);
		while (n && x > 20) {
			--n;
			x = x / 2 + 10;
		}
		if (x - 10 * m > 0) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}