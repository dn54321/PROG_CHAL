// https://codeforces.com/problemset/problem/707/A
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
	int y, x, n;
	scanf("%d%d", &y, &x);
	n = x * y;
	for (int i = 0; i < n; ++i) {
		scanf(" %c", &x);
		if (x != 'B' && x != 'W' && x != 'G') {
			printf("#Color\n");
			return 0;
		}
	}
	printf("#Black&White\n");
	return 0;
}