// https://codeforces.com/problemset/problem/1358/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>

#define p1 first
#define p2 second
#define pii pair<int,int> 
#define MXINT (1<<30)

typedef long long ll;
using namespace std;


int main() {
	int t, x, y, a;
	scanf("%d", &t);
	for (int i = 0; i < t; ++i) {
		scanf("%d%d", &x, &y);
		a = x * y;
		if (a % 2) ++a;
		printf("%d\n", a/2);
	}
	return 0;
}