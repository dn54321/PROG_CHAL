// https://codeforces.com/problemset/problem/41/A
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
	char s1[200];
	char s2[200];
	scanf("%s\n%s", s1, s2);
	if (strlen(s1) != strlen(s2)) {
		printf("NO\n");
		return 0;
	}
	for (int i = 0; i < strlen(s1); ++i) {
		if (s1[i] != s2[strlen(s2) - i - 1]) {
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");

	return 0;
}