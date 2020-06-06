// https://codeforces.com/problemset/problem/122/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
typedef long long ll;
using namespace std;

ll pow(ll n, ll p) {
	if (p == 1) return n;
	else if (p == 0) return 1;
	ll x = pow(n, p / 2);
	return x * x * (p % 2 ? n : 1);
}
int main() {
	ll n;
	int ct = 0;
	scanf("%I64d", &n);
	for (int i = log(n); i >= 0; --i) {
		ll p = pow(10, i);
		ll ln = 1LL * n / p;
		if (ln == 4 || ln == 7) ++ct;
		n = n % p;
	}
	if (ct == 4 || ct == 7) printf("YES\n");
	else printf("NO\n");
	return 0;
}