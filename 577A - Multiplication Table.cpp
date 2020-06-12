// https://codeforces.com/problemset/problem/577/A
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
	int n, x, res=0;
	scanf("%d%d", &n, &x); 
	for (int i = 1; i <= min(n, x); ++i) {
		if (!(x % i) && x/i <= n) ++res;
	}
	printf("%d\n", res);
	return 0;
}