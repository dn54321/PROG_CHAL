// https://codeforces.com/problemset/problem/432/A
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
	int n, k, x, res=0;
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &x);
		if (x <= 5 - k) ++res;
	}
	printf("%d\n", res / 3);
	return 0;
}