// http://codeforces.com/problemset/problem/71/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n;
	char s[100];
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%s", &s);
		int l = strlen(s);
		if (strlen(s) > 10) {
			printf("%c%d%c\n", s[0], l - 2, s[l - 1]);
		}
		else printf("%s\n", s);
	}

	return 0;
}	