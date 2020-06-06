// https://codeforces.com/problemset/problem/131/A
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
	bool caps = true;
	if (strlen(s) > 1) 
		for (int i = 1; i < strlen(s); ++i) {
			if (s[i] < 'A' || s[i] > 'Z') caps = false;
		}
	if (caps) {
		for (int i = 0; i < strlen(s); ++i) {
			if (islower(s[i])) s[i] = toupper(s[i]);
			else s[i] = tolower(s[i]);
		}
	}
	printf("%s\n", s);

	return 0;
}