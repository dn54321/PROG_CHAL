// https://codeforces.com/problemset/problem/785/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <map>
#define MXINT 1<<30
typedef long long ll;
using namespace std;

int main() {
	int n;
	int f = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		char s[200];
		scanf("%s", s);
		if (s[0] == 'T') f += 4;
		else if (s[0] == 'C') f += 6;
		else if (s[0] == 'O') f += 8;
		else if (s[0] == 'D') f += 12;
		else f += 20;
	}

	printf("%d\n", f);
	return 0;
}