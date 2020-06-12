// https://codeforces.com/problemset/problem/703/A
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
	int n, w=0,l=0,x,y;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d%d", &x, &y);
		if (x > y) ++w;
		if (x < y) ++l;
	}
	if (w > l) printf("Mishka\n");
	else if (w < l) printf("Chris\n");
	else printf("Friendship is magic!^^\n");
	return 0;
}