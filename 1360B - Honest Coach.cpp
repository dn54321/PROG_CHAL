// https://codeforces.com/problemset/problem/1360/B
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


int main() {
	int t, n, res;
	scanf("%d", &t);
	for (int tc = 0; tc < t; ++tc) {
		scanf("%d", &n);
		vector<int> v(n);
		res = MXINT;
		for (int i = 0; i < n; ++i) {
			scanf("%d", &v[i]);
		}
		sort(v.begin(), v.end());
		for (int i = 1; i < n; ++i) {
			if (v[i] - v[i - 1] < res) res = v[i] - v[i - 1];
		}
		printf("%d\n", res);
	}
	return 0;
}