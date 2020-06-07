// https://codeforces.com/problemset/problem/61/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>
#define MXINT 1<<30
typedef long long ll;
using namespace std;

int main() {
	char s1[200];
	char s2[200];
	scanf("%s\n%s", s1, s2);
	for (int i = 0; i < strlen(s1); ++i) {
		if (s1[i] != s2[i]) printf("1");
		else printf("0");
	}
	printf("\n");
}