// https://codeforces.com/problemset/problem/599/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <map>

#define p1 first
#define p2 second
#define pii pair<int,int> 
#define MXINT (1<<30)
#define MXLL (1LL<<60)

typedef long long ll;
using namespace std;


int main() {
	ll v[3], r=MXLL;
	scanf("%I64d%I64d%I64d", &v[0], &v[1], &v[2]);
	for (int i = 0; i < 3; ++i)
		for (int j = i + 1; j < 3; ++j)
			r = min(r, 2 * (v[i] + v[j]));
	printf("%I64d\n", min(r, v[0]+v[1]+v[2]));
	return 0;
}