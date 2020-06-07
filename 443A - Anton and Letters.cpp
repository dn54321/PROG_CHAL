// https://codeforces.com/problemset/problem/443/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <map>
#include <set>
#define MXINT 1<<30
typedef long long ll;
using namespace std;

int main() {
	char s[2000];
	fgets(s, 2000, stdin);
	set<char> c;
	if (strlen(s) > 3) 
		for (int i = 1; i < strlen(s); i += 3) {
			c.insert(s[i]);
		}

	printf("%d\n", c.size());
	return 0;
}