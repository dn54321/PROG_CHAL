// https://codeforces.com/contest/1475/problem/D
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
	int t;
	scanf("%d\n", &t);
	while (t--) {
		int n, m;
		scanf("%d%d", &n, &m);
		vector<int> a(n), b(n);
		vector<ll>  c1, c2;
		c1.push_back(0);
		c2.push_back(0);
		for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
		for (int i = 0; i < n; ++i) scanf("%d", &b[i]);
		for (int i = 0; i < n; ++i)
			if (b[i] == 1) c1.push_back(a[i]);
			else c2.push_back(a[i]);
		sort(c1.rbegin(), c1.rend()-1);
		sort(c2.rbegin(), c2.rend()-1);
		for (int i = 1; i < c1.size(); ++i) c1[i] += c1[i - 1];
		for (int i = 1; i < c2.size(); ++i) c2[i] += c2[i - 1];
		if (c1[c1.size() - 1] + c2[c2.size() - 1] < m) {
			printf("-1\n");
			continue;
		}
		int k = 0, mnk = MXINT, j=c2.size()-1;
		for (int i = 0; i < c1.size(); ++i) {
			while (j>0 && c1[i] + c2[j-1] >= m) --j;
			if (c1[i] + c2[j] < m) continue;
			k = i * 1 + 2 * j;
			if (mnk > k) mnk = k;
		}
		printf("%d\n", mnk);	
	}
	return 0;
}