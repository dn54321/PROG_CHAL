// https://codeforces.com/problemset/problem/935/A
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
	int n, res = 0;
	scanf("%d", &n);
	for (int i = 1; i < n; ++i) {
		if (n - i > 0 && !((n - i) % i)) ++res;
	}
	printf("%d\n", res);
	return 0;
}