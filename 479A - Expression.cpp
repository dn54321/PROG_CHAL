// https://codeforces.com/problemset/problem/479/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>

typedef long long ll;
using namespace std;

int math(int a, int b, int c) {
	if (!b && !c) return a;
	return max(math(a*b,c,0),math(a+b,c,0));
}

int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int res = max(math(a, b, c), math(c, b, a));
	printf("%d", res);
	return 0;
}	