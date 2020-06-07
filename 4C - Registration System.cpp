// https://codeforces.com/problemset/problem/4/C
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

typedef long long ll;
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	char s[100];
	map<string, int> m;
	for (int i = 0; i < n; ++i) {
		scanf("%s", &s);
		if (m.find(s) == m.end()) {
			printf("OK\n");
			m[s] = 1;
		}
		else printf("%s%d\n", s, m[s]++);
	}
	return 0;
}