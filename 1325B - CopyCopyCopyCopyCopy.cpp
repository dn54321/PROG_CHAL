// https://codeforces.com/problemset/problem/1325/B
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <set>

#define p1 first
#define p2 second
#define pii pair<int,int> 
#define MXINT (1<<30)

typedef long long ll;
using namespace std;


int main() {
	int t, n, x;
	scanf("%d", &t);
	for (int tc = 0; tc < t; ++tc) {
		set<int> s;
		scanf("%d", &n);
		for (int i = 0; i < n; ++i) {
			scanf("%d", &x);
			s.insert(x);
		}
		printf("%d\n", s.size());
	}
	return 0;
}