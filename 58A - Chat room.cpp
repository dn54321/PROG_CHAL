// https://codeforces.com/problemset/problem/546/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
typedef long long ll;
using namespace std;

int main() {
	char s[200];
	char s2[10] = "hello";
	scanf("%s", s);
	int c=0;
	for (int i = 0; i < strlen(s); ++i) {
		if (s[i] == s2[c]) {
			++c;
			if (c == 5) {
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");

}