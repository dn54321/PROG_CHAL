// https://codeforces.com/problemset/problem/556/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
	int n, p = -1, res,z=0;
	scanf("%d", &n);
	vector<char> c(n,-1);
	for (int i = 0; i < n; ++i) {
		scanf(" %c", &c[i-z]);
		c[i-z] = c[i-z] - '0';
		if ((c[i - z] && !p) || (!c[i - z] && p == 1)) {
			z += 2;
			if (i - z >= 0) p = c[i - z];
			else p = -1;
		}
		else p = c[i-z];
	}
	printf("%d\n", n-z);
	return 0;
}