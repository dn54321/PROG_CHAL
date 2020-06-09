// https://codeforces.com/problemset/problem/749/A
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

bool c(int n) {
	if (n < 4) return true;
	if (!(n % 2)) return false;
	for (int i = 3; i * i <= n; i += 2)
		if (!(n % i)) return false;
	return true;
}

int main() {
	int n;
	scanf("%d", &n);
	vector<int> p;
	for (int i = 2; i <= n; ++i) {
		if (c(i))
			while (n>=i && n-i != 1) {
				n -= i;
				p.push_back(i);
			}
	}
	printf("%d\n", p.size());
	for (int i = 0; i < p.size(); ++i) {
		printf("%d ", p[i]);
	}
	printf("\n");
	return 0;
}