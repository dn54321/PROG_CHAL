// https://codeforces.com/problemset/problem/469/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>
#define MXINT 1<<30
typedef long long ll;
using namespace std;

int main() {
	int n,x,y;
	scanf("%d", &n);
	vector<bool> lvl(n, 0);
	for (int i=0;i<2;++i) {
		scanf("%d", &x);
		for (int j = 0; j < x; ++j) {
			scanf("%d", &y);
			if (!lvl[y-1]) {
				lvl[y-1] = 1;
				--n;
			}
		}
	}
	if (n) printf("Oh, my keyboard!\n");
	else printf("I become the guy.\n");

	return 0;
}