// https://codeforces.com/problemset/problem/82/
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
#define vvi vector<vector<int>>
#define MXINT (1<<30)
typedef long long ll;
using namespace std;

int main() {
	int n, k, pos;
	scanf("%d", &n);
	k = log(n/5.0 + 1) / log(2);
	n = n - 5 * (pow(2, k) - 1);
	if (n-- == 0) pos = 4;
	else {
		pos = n / pow(2,k);
	}
	if (pos == 0) printf("Sheldon\n");
	else if (pos == 1) printf("Leonard\n");
	else if (pos == 2) printf("Penny\n");
	else if (pos == 3) printf("Rajesh\n");
	else printf("Howard\n");
	return 0;
}