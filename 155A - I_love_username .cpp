// https://codeforces.com/problemset/problem/155/A
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

int main() {
	int n,x,mn=MXINT,mx=-1, res=0;
	scanf("%d%d", &n,&x);
	mn = mx = x;
	for (int i = 1; i < n; ++i) {
		scanf("%d", &x);
		if (mn > x) {
			mn = x;
			++res;
		}
		else if (mx < x) {
			mx = x;
			++res;
		}
	}
	printf("%d", res);
	return 0;
}