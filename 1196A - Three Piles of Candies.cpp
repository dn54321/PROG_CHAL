// https://codeforces.com/problemset/problem/1196/A
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
	ll t, mn, x;
	vector<ll> v(3);
	scanf("%I64d", &t);
	while (t--) {
		scanf("%I64d%I64d%I64d", &v[0], &v[1], &v[2]);
		sort(v.begin(), v.end());
		x = v[1] - v[0];
		x = v[1] + ((v[2] - x)>>1);
		printf("%I64d\n", x);
	}

	return 0;
}