// https://codeforces.com/problemset/problem/270/A
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
	int tc,x;
	scanf("%d", &tc);
	for (int i = 0; i < tc; ++i) {
		scanf("%d", &x);
		if (360 % (180 - x)) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}