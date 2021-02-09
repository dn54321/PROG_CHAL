// https://codeforces.com/problemset/problem/271/B
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

vector<int> p(100001, 1);

int main() {
	p[0] = 0;
	p[1] = 0;
	int sn = (int) sqrt(100000);
	int w, h, x;
	for (int i = 2; i <= sn; ++i) {
		if (p[i]) {
			for (int j = i * i; j <= 100000; j += i) p[j] = 0;
		}
	}
	x = 100003;
	for (int i = 100000; i >= 0; --i) {
		if (p[i]) {
			x = i;
			p[i] = 0;
		}
		else {
			p[i] = x - i;
		}
	}

	scanf("%d%d", &h, &w);
	int mn = MXINT;
	vector<int> r(h,0);
	vector<int> c(w,0);
	for (int i=0;i<h;++i)
		for (int j = 0; j<w; ++j) {
			scanf("%d", &x);
			r[i] += p[x];
			c[j] += p[x];
			if (j == w - 1) mn = min(mn, r[i]);
			if (i == h - 1) mn = min(mn, c[j]);
		}
	printf("%d\n", mn);
	return 0;
}