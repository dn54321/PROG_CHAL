// https://codeforces.com/problemset/problem/208/A
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
	char s[400];
	char patt[] = "WUB";
	char res[400];
	bool spc = 0;
	int ct = 0;
	bool word = 0;
	scanf("%s", &s);
	for (int i = 0; i < strlen(s); ++i) {
		if (strncmp(&s[i], patt, 3)) {
			if (!word && spc) res[ct++] = ' ';
			res[ct++] = s[i];
			spc = 1;
			word = 1;
		}
		else {
			word = 0;
			i += 2;
		}
	}
	res[ct] = '\0';
	printf("%s\n", res);
	
}