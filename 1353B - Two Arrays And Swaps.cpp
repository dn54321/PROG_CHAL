// https://codeforces.com/problemset/problem/1353/B
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
	int t,n,k;
	scanf("%d", &t);
	for (int tc = 0; tc < t; ++tc) {
		scanf("%d%d", &n, &k);
		int sz = 0;
		vector<int> a(n), b(n);
		for (int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
			sz += a[i];
		}
		for (int i = 0; i < n; ++i) scanf("%d", &b[i]);
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		for (int i = 0; i < k; ++i) {
			if (b[n - i - 1] < a[i]) break;
			sz += b[n - i - 1] - a[i];
		}
		printf("%d\n", sz);
	}
	return 0;
}