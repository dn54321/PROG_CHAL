// https://codeforces.com/problemset/problem/451/A
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
	int a, b;
	scanf("%d%d", &a, &b);
	a = min(a, b);
	if (a % 2) printf("Akshat\n");
	else printf("Malvika\n");
	return 0;
}