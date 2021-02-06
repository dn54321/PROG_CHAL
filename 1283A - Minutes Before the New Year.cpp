// https://codeforces.com/problemset/problem/1283/A
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
	int t, h, m, r;
	scanf("%d", &t);
	for (int tc = 0; tc < t; ++tc) {
		scanf("%d%d", &h, &m);
		r = (24 - h) * 60 - m;
		printf("%d\n", r);
	}
	return 0;
}