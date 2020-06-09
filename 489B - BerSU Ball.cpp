// https://codeforces.com/problemset/problem/489/B
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
	int nb, ng, res=0;
	scanf("%d", &nb);
	vector<int> b(nb);
	for (int i = 0; i < nb; ++i) scanf("%d", &b[i]);
	scanf("%d", &ng);
	vector<int> g(ng);
	for (int i = 0; i < ng; ++i) scanf("%d", &g[i]);
	sort(b.begin(), b.end());
	sort(g.begin(), g.end());
	int j = 0;
	for (int i = 0; i < nb; ++i) {
		if (j >= ng) break;
		int d = abs(b[i] - g[j]);
		if (d <= 1) {
			++res;
			++j;
		}
		else if (g[j] < b[i]) {
			++j; --i;
		}
	}
	printf("%d\n", res);
	return 0;
}