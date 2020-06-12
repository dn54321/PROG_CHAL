// https://codeforces.com/problemset/problem/492/A
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
	int n, h = 0;
	scanf("%d", &n);
	for (int i = n; i>=(h + 2)*(h + 1)/2; ++h) i -= (h+2)*(h+1)/2;
	printf("%d\n", h);
	return 0;
}