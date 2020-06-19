// https://codeforces.com/problemset/problem/1327/A
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
	int t, n, k;
	scanf("%d", &t);
	for (int i = 0; i < t; ++i) {
		scanf("%d%d", &n, &k);
		if (n % 2 == k % 2 && 1LL*n >= 1LL*k*k ) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}