// https://codeforces.com/problemset/problem/1367/B
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
	int t, n, x;
	scanf("%d", &t);
	for (int tc = 0; tc < t; ++tc) {
		scanf("%d", &n);
		int e[2] = { 0 };
		for (int i = 0; i < n; ++i) {
			scanf("%d", &x);
			if (i % 2 != x % 2) ++e[i % 2];
		}
		if (e[0] == e[1]) printf("%d\n", e[0]);
		else printf("-1\n");
	}
	return 0;
}