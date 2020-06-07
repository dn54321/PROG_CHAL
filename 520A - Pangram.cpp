// https://codeforces.com/problemset/problem/520/A
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
	int n, res=26;
	bool freq[26] = { 0 };
	char s[200];
	scanf("%d", &n);
	scanf("%s", &s);
	for (int i = 0; i < n; ++i) {
		int c = tolower(s[i]) - 'a';
		if (!freq[c]) {
			--res;
			freq[c] = 1;
		}
	}
	if (!res) printf("YES\n");
	else printf("NO\n");	

	return 0;
}