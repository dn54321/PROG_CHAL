// https://codeforces.com/problemset/problem/69/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
typedef long long ll;
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	vector<int> v(3, 0);
	int x, y, z;
	for (int i = 0; i < n; ++i) {
		scanf("%d%d%d", &x, &y, &z);
		v[0] += x;
		v[1] += y;
		v[2] += z;
	}
	if (!v[0] && !v[1] && !v[2]) printf("YES\n");
	else printf("NO\n");

	return 0;
}