// https://codeforces.com/problemset/problem/368/B
// SOLUTION BY DN54321

#include <iostream> // cin/cout
#include <string.h> // strlen
#include <ctype.h> // toupper, tolower, islower, isupper
#include <vector>  // vector
#include <functional> // greater, less
#include <algorithm> //sort 
#include <set> // unsorted set, multiset, set
#include <numeric> //gcd, lcm (c++17)
#define p1 first
#define p2 second
#define pii pair<int,int> 
#define MXINT (1<<30)

typedef long long ll;
using namespace std;

int main() {
	int n, m, x;
	scanf("%d%d", &n,&m);
	vector<int> v(n), f(100001, 0);
	for (int i = 0; i < n; ++i) scanf("%d", &v[i]);
	++f[v[n-1]];
	v[n - 1] = 1;
	for (int i = n - 2; i >= 0; --i) {
		if (!(f[v[i]]++)) v[i] = v[i + 1] + 1;
		else v[i] = v[i + 1];
	}
	for (int i = 0; i < m; ++i) {
		scanf("%d", &x);
		printf("%d\n", v[x - 1]);
	}
	return 0;
}