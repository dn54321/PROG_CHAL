// https://codeforces.com/problemset/problem/489/C
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
	int m, s, x,y, res = 0;
	scanf("%d%d", &m, &s);
	vector<int> mn(m,0), mx(m,0);
	mn[0] = 1;
	if (s == 0 && m == 1) printf("0 0\n");
	else if (s==0 || 9*m < s) printf("-1 -1\n");
	else {
		int p = s--;
		for (int i = 0; p > 0; ++i) {
			y = s > (9-mn[m-i-1]) ? 9-mn[m-i-1] : s;
			x = p > 9 ? 9 : p;
			mn[m - i - 1] += y;
			mx[i] += x;
			s -= y;
			p -= x;
		}
		for (int i = 0; i < m; ++i) printf("%d", mn[i]);
		printf(" ");
		for (int i = 0; i < m; ++i) printf("%d", mx[i]);
		printf("\n");
	}
	return 0;
}