// https://codeforces.com/problemset/problem/711/A
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
	int n, x = 0;
	vector<char> c;
	char s[100];
	scanf("%d", &n);
	c.resize(4 * n);
	for (int i = 0; i < n; ++i) {
		scanf("%s", s);
		for (int j = 0; j < 4; ++j) {
			if (j < 2) c[i * 4 + j] = s[j];
			else c[i * 4 + j] = s[j + 1];
		}
		if (!x && s[0] == 'O' && s[1] == 'O') {
			++x;
			c[i * 4] = '+'; c[i*4+1] = '+';
		}
		else if (!x && s[3] == 'O' && s[4] == 'O') {
			++x;
			c[i * 4+2] = '+'; c[i * 4+3] = '+';
		}
	}
	if (x) {
		printf("YES\n");
		for (int i = 0; i < n; ++i) {
			printf("%c%c|%c%c\n", c[4 * i], c[4 * i + 1], c[4 * i + 2], c[4 * i + 3]);
		}
	}
	else printf("NO\n");
	return 0;
}