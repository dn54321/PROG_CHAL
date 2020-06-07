// https://codeforces.com/problemset/problem/472/A
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

bool c(int n) {
	if (!(n % 2)) return true;
	for (int i = 3; i < (int)sqrt(n) + 1; i+=2)
		if (!(n % i) && i!=n) return true;
	return false;
}

int main() {
	int n,i;
	scanf("%d", &n);
	for (i = 4; i < n; ++i) {
		if (c(i) && c(n-i)) break;
	}
	printf("%d %d\n", i, n-i);

	return 0;
}