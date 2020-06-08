// https://codeforces.com/problemset/problem/460/A
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

int main() {
	int n, m, d;
	scanf("%d%d", &n, &m);
	for (d = 1; n > 0; ++d) {
		--n;
		if (!(d % m)) ++n;
	}
	printf("%d", d-1);
	return 0;
}