// https://codeforces.com/problemset/problem/136/A	
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
	int n, x;
	scanf("%d", &n);
	vector<int> v(n + 1);
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &x);
		v[x] = i;
	}
	for (int i = 1; i < n; ++i)
		printf("%d ", v[i]);
	printf("%d\n", v[n]);
	return 0;
}