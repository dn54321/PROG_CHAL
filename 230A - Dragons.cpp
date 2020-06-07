// https://codeforces.com/problemset/problem/230/A
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

typedef long long ll;
using namespace std;

int main() {
	int s, n;
	scanf("%d%d", &s, &n);
	vector<pii> d(n);
	for (int i = 0; i < n; ++i) {
		scanf("%d%d", &d[i].p1, &d[i].p2);
	}
	sort(d.begin(), d.end());
	for (int i = 0; i < n; ++i) {
		if (s > d[i].p1) s += d[i].p2;
		else {
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}