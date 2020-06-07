// https://codeforces.com/problemset/problem/1335/A
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

typedef long long ll;
using namespace std;

int main() {
	int tcs, c, res;
	scanf("%d", &tcs);
	for (int tc = 0; tc < tcs; ++tc) {
		scanf("%d", &c);
		if (c <= 2) res = 0;
		else res = c / 2 - (c % 2 ? 0 : 1);
		printf("%d\n", res);
	}
	return 0;
}