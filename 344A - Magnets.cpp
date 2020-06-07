// https://codeforces.com/problemset/problem/344/A
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
	int n,g=1;
	scanf("%d", &n);
	char s[2], e[2];
	scanf(" %c%c", &s[0], &e[0]);
	for (int i = 1; i < n; ++i) {
		scanf(" %c%c", &s[1], &e[1]);
		if (s[1] == e[0]) ++g;
		s[0] = s[1];
		e[0] = e[1];
	}

	printf("%d", g);
	return 0;
}