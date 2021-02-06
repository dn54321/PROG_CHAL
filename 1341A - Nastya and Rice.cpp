// https://codeforces.com/problemset/problem/1341/A
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
	int t,n,a,b,c,d;
	scanf("%d", &t);
	for (int tc = 0; tc < t; ++tc) {
		scanf("%d%d%d%d%d", &n, &a, &b, &c, &d);
		int mn=n*(a-b), mx=n*(a+b), mmn=c-d, mmx=c+d;
		if ((mmn <= mn && mn <= mmx) || (mmn <= mx && mx <= mmx) || (mn <= mmn && mmn <= mx)) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}