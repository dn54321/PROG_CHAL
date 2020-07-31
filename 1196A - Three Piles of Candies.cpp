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
	ll t, mn, x, r;
	vector<ll> v(3), k(3);
	scanf("%I64d", &t);
	while (t--) {
		scanf("%I64d%I64d%I64d", &v[0], &v[1], &v[2]);
		mn = MXLL;
		for (int i = 0; i < 3; ++i)
			for (int j = i + 1; j < 3; ++j) {
				x = abs(v[i] - v[j]);
				if (x < mn) {
						mn = x;
						k[0] = v[i];
						k[1] = v[j];
						k[2] = v[3 - i - j];
				}
			}
		r = min(k[0], k[1]);
		x = abs(k[0] - k[1]);
		if (k[2] > x) {
			k[2] -= x;
			printf("%I64d\n", r + x + k[2] / 2);
		}
		else {
			printf("%I64d\n", r + k[2]);
		}
		
	}
	return 0;
}