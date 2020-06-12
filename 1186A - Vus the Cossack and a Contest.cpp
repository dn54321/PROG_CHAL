// https://codeforces.com/problemset/problem/1186/A
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
	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	if (min(m, k) >= n) printf("Yes\n");
	else printf("No\n");
	return 0;
}