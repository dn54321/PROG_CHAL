// https://codeforces.com/problemset/problem/1296/A
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
	int t, n, x;
	scanf("%d", &t);
	for (int tc = 0; tc < t; ++tc) {
		scanf("%d", &n);
		bool e = 0, o = 0;
		for (int i = 0; i < n; ++i) {
			scanf("%d", &x);
			if (x % 2) o = 1;
			else e = 1;
		}
		if (e && o) printf("YES\n");
		else if (o && !e && n % 2) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}