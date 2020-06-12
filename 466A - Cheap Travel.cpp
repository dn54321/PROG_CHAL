// https://codeforces.com/problemset/problem/466/A
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
	int n, m, a, b, p;
	scanf("%d%d%d%d", &n, &m, &a, &b);
	if (a * m < b) b = a * m;
	p = (n / m) * b;
	if (b < (n % m) * a) p += b;
	else p += (n % m) * a;
	printf("%d\n", p);
	return 0;
}