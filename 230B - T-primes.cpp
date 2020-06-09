// https://codeforces.com/problemset/problem/230/B
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

bool c(ll n) {
	if (n < 4) return true;
	if (!(n % 2)) return false;
	for (ll i = 3; i*i <= n; i += 2)
		if (!(n % i)) return false;
	return true;
}

int main() {
	int n;
	ll k;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%I64d", &k);
		ll a = sqrtl(k);
		if (k > 3 && a * a == k && c(a)) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}