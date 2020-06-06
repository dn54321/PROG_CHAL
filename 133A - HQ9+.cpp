// https://codeforces.com/problemset/problem/617/A
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
	char s[200];
	char patt[] = { 'H','Q','9' };
	scanf("%s", s);
	for (int i = 0; i <= strlen(s); ++i) {
		for (int j = 0; j <= sizeof(patt); ++j) {
			if (s[i] == patt[j]) {
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");

	return 0;
}