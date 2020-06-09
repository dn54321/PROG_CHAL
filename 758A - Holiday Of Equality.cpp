// https://codeforces.com/problemset/problem/758/A
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
	int n, mx=0, cst=0;
	scanf("%d", &n);
	vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &v[i]);
		if (mx < v[i]) mx = v[i];
	}
	for (int i = 0; i < n; ++i) {
		cst += mx - v[i];
	}
	printf("%d\n", cst);
	return 0;
}