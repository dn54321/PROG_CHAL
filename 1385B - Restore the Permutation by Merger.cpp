// https://codeforces.com/problemset/problem/1385/B
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
	int t, n, k;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		vector<int> vis(51, 0);
		int ct = n << 1;
		while (ct--) {
			scanf("%d", &k);
			if (vis[k]) continue;
			++vis[k];
			printf("%d ", k);
		}
		printf("\n");
	}
	return 0;
}