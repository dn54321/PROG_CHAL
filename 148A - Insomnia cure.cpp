// https://codeforces.com/problemset/problem/148/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>
#define MXINT 1<<30
typedef long long ll;
using namespace std;

int main() {
	vector<int> v(5);
	for (int i = 0; i < 5; ++i) scanf("%d", &v[i]);
	int res = 0;
	vector<bool> vis(v[4], 0);
	for (int i=0; i<4; ++i)
		for (int j = v[i]-1; j < v[4]; j+=v[i])
			if (!vis[j]) {
				vis[j] = 1;
				++res;
			}
	printf("%d\n", res);

	return 0;
}