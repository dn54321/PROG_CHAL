// https://codeforces.com/problemset/problem/706/B
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
#define vvi vector<vector<int>>
#define MXINT (1<<30)
typedef long long ll;
using namespace std;

int ub(int p, const vector<int> &v) {
	int s = 0, e = v.size()-1, m;
	while (s != e) {
		m = (s + e)>>1;
		if (v[m] <= p) s = m + 1;
		else e = m;
	}
	if (p >= v[s]) ++s;
	return s;
}

int main() {
	int n, q, m;
	scanf("%d", &n);
	vector<int> p(n);
	for (int i = 0; i < n; ++i) scanf("%d", &p[i]);
	sort(p.begin(), p.end());
	scanf("%d", &q);
	for (int i = 0; i < q; ++i) {
		scanf("%d", &m);
		printf("%d\n", ub(m, p));
	}
}