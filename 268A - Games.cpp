// https://codeforces.com/problemset/problem/268/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
	int n,x,y,res=0;
	int homef[101] = { 0 }, home[101], guest[101];
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d %d", &x, &y);
		++homef[x];
		home[i] = x;
		guest[i] = y;
	}
	for (int i = 0; i < n; ++i) {
		res += homef[guest[i]];
		if (home[i] == guest[i]) --res;
	}
	printf("%d\n", res);
}