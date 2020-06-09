// https://codeforces.com/problemset/problem/1343/A
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
#define MXINT (1<<30)
typedef long long ll;
using namespace std;

int main() {
	int tc,n,x;
	scanf("%d", &tc);
	for (int i = 0; i < tc; ++i) {
		scanf("%d", &n);
		int k = 1;
		while (++k) {
			x = n / ((int)pow(2, k) - 1);
			if (x*((int)pow(2,k)-1) == n) break;
		}
		printf("%d\n", x);
	}
	return 0;
}