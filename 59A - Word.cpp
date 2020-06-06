// https://codeforces.com/problemset/problem/59/A
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
	scanf("%s", s);
	int l = 0, u = 0;
	for (int i = 0; i < strlen(s); ++i) {
		if (s[i] >= 'a' && s[i] <= 'z') ++l;
		else ++u;
	}
	if (l >= u) {
		for (int i = 0; i <= strlen(s); ++i) {
			s[i] = tolower(s[i]);
		}
	}
	else {
		for (int i = 0; i <= strlen(s); ++i) {
			s[i] = toupper(s[i]);
		}
	}
	printf("%s", s);
	return 0;
}