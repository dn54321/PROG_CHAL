// https://codeforces.com/problemset/problem/119/A
// SOLUTION BY DN54321

#include <iostream> // printf/scanf
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
	int a, b, n, i;
	scanf("%d%d%d", &a, &b, &n);
	for (i = 0; n > 0; ++i) {
		if (i % 2) n -= gcd(b, n);
		else n -= gcd(a, n);
	}
	if (i % 2) printf("0\n");
	else printf("1\n");
	return 0;
}