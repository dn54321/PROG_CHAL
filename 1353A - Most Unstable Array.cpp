// https://codeforces.com/problemset/problem/1353/A
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
	int tc,n,m;
	scanf("%d", &tc);
	for (int t = 0; t < tc; ++t) {
		scanf("%d%d", &n, &m);
		if (n == 1) printf("0\n");
		else if (n == 2) printf("%d\n", m);
		else printf("%d\n", m * 2);
	}

	return 0;
}