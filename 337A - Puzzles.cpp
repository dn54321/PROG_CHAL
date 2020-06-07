// https://codeforces.com/problemset/problem/337/A
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
	int n, m, mn=MXINT;
	scanf("%d%d", &n, &m);
	vector<int> pz(m);
	for (int i = 0; i < m; ++i) {
		scanf("%d", &pz[i]);
	}
	sort(pz.begin(), pz.end());
	for (int i = 0; i < m; ++i) {
		if (i + n - 1 >= m) break;
		if (mn > pz[i + n - 1] - pz[i]) mn = pz[i + n - 1] - pz[i];
	}
	printf("%d\n", mn);
	return 0;
}