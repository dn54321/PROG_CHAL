// https://codeforces.com/problemset/problem/1097/A
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
	char c[5];
	char h[5];
	scanf("%s", c);
	for (int i = 0; i < 5; ++i) {
		scanf("%s", h);
		if (h[0] == c[0] || h[1] == c[1]) {
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
	return 0;
}