// https://codeforces.com/problemset/problem/1399/A
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

typedef long long ll;
using namespace std;


int main() {
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		vector<int> v(n);
		bool res = true;
		for (int i = 0; i < n; ++i) scanf("%d", &v[i]);
		sort(v.begin(), v.end());
		for (int i = 1; i < n; ++i)
			if (v[i] - v[i - 1] > 1) res = false;
		if (res || n==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}