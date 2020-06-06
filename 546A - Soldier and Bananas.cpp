// https://codeforces.com/problemset/problem/546/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
typedef long long ll;
using namespace std;

int main() {
	int k, n, w;
	scanf("%d%d%d", &k, &n, &w);
	int cst = (int) ceil(1.0 * k * w * (1.0 + w) / 2 -n);
	if (cst < 0) printf("0\n");	
	else printf("%d\n", cst);

}