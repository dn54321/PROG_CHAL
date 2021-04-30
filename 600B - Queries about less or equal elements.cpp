// https://codeforces.com/problemset/problem/600/B
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <map>

#define p1 first
#define p2 second
#define pii pair<int,int> 
#define MXINT (1<<30)
#define MXLL (1LL<<60)

typedef long long ll;
using namespace std;

vector<int> a, b, bi, c;
int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	a.resize(n);
	b.resize(m);
	bi.resize(m);
	c.resize(m, 0);
	for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
	for (int i = 0; i < m; ++i) scanf("%d", &b[i]);
	for (int i = 0; i < m; ++i) bi[i] = b[i];
	sort(bi.begin(), bi.end());
	for (int i = 0; i < n; ++i) {
		auto it = lower_bound(bi.begin(), bi.end(), a[i]);
		if (it != bi.end()) ++c[it - bi.begin()];
	}
	for (int i = 1; i < m; ++i) c[i] += c[i - 1];
	for (int i = 0; i < m; ++i) {
		auto it = lower_bound(bi.begin(), bi.end(), b[i]);
		printf("%d ", c[it - bi.begin()]);
	}
	printf("\n");
	return 0;
}