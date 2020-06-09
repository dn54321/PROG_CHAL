// https://codeforces.com/problemset/problem/379/A
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
	int a, b, c=0;
	int res=0;
	scanf("%d%d", &a, &b);
	while (a>0) {
		res += a;
		c += a;
		a = c/b;
		c -= b*a;
	}
	printf("%d\n", res);
	return 0;
}