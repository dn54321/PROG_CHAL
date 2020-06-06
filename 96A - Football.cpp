// https://codeforces.com/problemset/problem/96/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
typedef long long ll;
using namespace std;
int main() {
	char s[10001];
	scanf("%s", &s);
	int j = '0', k = 0;
	for (int i = 0; i < strlen(s); ++i) {
		if (s[i] == j) {
			++k;
			if (k >= 7) {
				printf("YES\n");
				return 0;
			}
		}
		else {
			j = '1' - j + '0';
			k = 1;
 		}

	}
	printf("NO\n");
	return 0;
}