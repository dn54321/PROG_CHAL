// https://codeforces.com/problemset/problem/1352/D
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


int main() {
	int t, n, k;
	int a, b, m, an, bn;
	int f, l;
	scanf("%d", &t);
	while (t--) {
		a = 0, b = 0, m = 0;
		an = 0, bn = 0;
		scanf("%d", &n);
		vector<int> c(n);
		for (int i = 0; i < n; ++i)
			scanf("%d", &c[i]);
		f = 0, l = n-1;
		while (f <= l) {
			a = 0;
			for (int i = f; i <= l && a <= b; ++i) {
				f = i+1;
				a += c[i];
				an += c[i];
			}
			++m;
			if (f > l) break;
			b = 0;
			for (int i = l; i >= f && b <= a; --i) {
				l = i-1;
				b += c[i];
				bn += c[i];

			}
			++m;
		}
		printf("%d %d %d\n", m, an, bn);
	}
	return 0;
}