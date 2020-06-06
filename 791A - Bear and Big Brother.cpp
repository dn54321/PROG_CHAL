
// https://codeforces.com/problemset/problem/791/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>

typedef long long ll;
using namespace std;

int main() {
	int x, y;
	scanf("%d%d", &x, &y);
	int t = (int) ceil(log(1.0 * y / x) / log(1.0 * 3 / 2));
	if (x*pow(3,t) == y*pow(2,t)) ++t;
	printf("%d\n", t);

	return 0;
}