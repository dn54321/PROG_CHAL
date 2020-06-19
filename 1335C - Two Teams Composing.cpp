// https://codeforces.com/problemset/problem/1335/C
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
	int t, n, x, r;

	scanf("%d", &t);
	for (int tc = 0; tc < t; ++tc) {
		scanf("%d", &n);
		vector<int> freq(n+1, 0);
		int mx = 0, k, sz = 0;
		for (int i = 0; i < n; ++i) {
			scanf("%d", &x);
			if (!freq[x]++) ++sz;
			if (mx < freq[x]) mx = freq[x];
		}
		r = min(sz - 1, mx);
		if (mx > r+1) ++r;
		printf("%d\n", r);
	}
	return 0;
}