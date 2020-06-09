// https://codeforces.com/problemset/problem/490/A
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

int main() {
	int n,x;
	scanf("%d", &n);
	vvi v(4);
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &x);
		v[x].push_back(i);
	}
	
	int sz = min(min((int)v[1].size(), (int)v[2].size()),(int)v[3].size());
	printf("%d\n", sz);
	for (int i = 0; i < sz; ++i) {
		for (int j = 1; j <= 3; ++j) {
			printf("%d ", v[j][i]);
		}
		printf("\n");
	}
	return 0;
}