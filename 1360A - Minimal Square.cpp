// https://codeforces.com/problemset/problem/1360/A
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
	int t, a, b, s;
	scanf("%d", &t);
	for (int i = 0; i < t; ++i) {
		scanf("%d%d", &a, &b);
		if (a > b) swap(a, b);
		s = b;
		if (2*a > b) s = 2*a;
		if (s == a && 2 * b > a) s = 2*b;
		printf("%d\n", s * s);
	}
	return 0;
}