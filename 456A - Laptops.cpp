// https://codeforces.com/problemset/problem/456/A
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
	int n;
	scanf("%d", &n);
	vector<pii> p(n);
	for (int i = 0; i < n; ++i) {
		scanf("%d%d", &p[i].p1, &p[i].p2);
	}
	sort(p.begin(), p.end());
	pii x = p[0];
	for (int i = 1; i < n; ++i) {
		if (p[i].p1 != x.p1 && x.p2 > p[i].p2) {
			printf("Happy Alex\n");
			return 0;
		}
		x = p[i];
	}
	printf("Poor Alex\n");
	return 0;
}