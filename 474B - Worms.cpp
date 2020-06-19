// https://codeforces.com/problemset/problem/474/B
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

int ub(int p, const vector<int>& v) {
	int s = 0, e = v.size() - 1, m;
	while (s != e) {
		m = (s + e) >> 1;
		if (v[m] <= p) s = m + 1;
		else e = m;
	}
	if (p >= v[s]) ++s;
	return s;
}

int main() {
	int n, tot=0, x;
	scanf("%d", &n);
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &x);
		tot += x;
		a[i] = tot;
	}
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &x);
		printf("%d\n", ub(x-1, a)+1);
	}

	return 0;
}