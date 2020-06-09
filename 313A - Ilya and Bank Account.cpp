// https://codeforces.com/problemset/problem/313/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <map>
#include <utility>

#define p1 first
#define p2 second
#define pii pair<int,int>
#define vvi vector<vector<int>>
#define MXINT (1<<30)

typedef long long ll;
using namespace std;

int main() {
	char s[100];
	scanf("%s", s);
	if (s[0] != '-') printf("%s\n", s);
	else {
		int sz = strlen(s);
		int n = 0;
		if (sz == 3 && (s[sz - 1] == '0' || s[sz - 2] == '0')) n = 1;
		for (int i = n; i < sz - 2; ++i)
			printf("%c", s[i]);
		printf("%c\n", min(s[sz - 1], s[sz - 2]));
	}
	return 0;
}