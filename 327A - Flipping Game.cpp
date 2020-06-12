// https://codeforces.com/problemset/problem/327/A
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
	int n, x, res=0, mx = -MXINT;
	vector<int> c;
	scanf("%d", &n);
	c.resize(n + 1);
	c[0] = 0;
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &x);
		if (x) c[i] = c[i-1] - 1;
		else c[i] = c[i-1] + 1;
		res += x;
	}
	for (int i = 0; i < n; ++i )
		for (int j = i + 1; j <= n; ++j) {
			if (c[j] - c[i] > mx) mx = c[j] - c[i];
		}
	printf("%d\n", res + mx);
	return 0;
}