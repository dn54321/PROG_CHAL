// https://codeforces.com/problemset/problem/1154/A
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
#define MXINT (1<<30)
typedef long long ll;
using namespace std;
vector<vector<ll>> dp(100001);

int main() {
	int a, b, c, d;
	vector<int> l(4);
	for (int i = 0; i < 4; ++i) scanf("%d", &l[i]);
	sort(l.begin(), l.end());
	for (int i = 0; i < 3; ++i) {
		int l0 = l[(i + 2) % 3];
		int l1 = l[(i + 1) % 3];
		int l2 = l[i];
		if (2 * l[3] -l1 - l0 == l2) {
			printf("%d %d %d\n", l[3] - l0, l1 - l[3] + l0, -l1 + l[3]); return 0;
		}
	}

	return 0;
}