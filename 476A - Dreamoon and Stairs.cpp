// https://codeforces.com/problemset/problem/476/A
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
	int x, y, r;
	scanf("%d%d", &x, &y);
	if (x < y) printf("-1\n");
	else {
		r = x / 2 + (x % 2 ? 1 : 0);
		x = r / y * y;
		if (x < r) x += y;
		printf("%d\n", x);
	}
	return 0;
}