// https://codeforces.com/problemset/problem/734/A
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
	int n, c, res=0;
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; ++i) {
		c = getchar();
		if (c == 'A') ++res;
		else --res;
	}
	if (res > 0) printf("Anton\n");
	else if (res) printf("Danik\n");
	else printf("Friendship\n");
	return 0;
}