// https://codeforces.com/problemset/problem/677/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
	int n, h, res=0, x;
	scanf("%d %d", &n, &h);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &x);
		if (x > h) res += 2;
		else ++res;
	}
	printf("%d\n", res);
	
}