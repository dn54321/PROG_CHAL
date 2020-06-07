// https://codeforces.com/problemset/problem/1030/A
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
	int n,t;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &t);
		if (t) {
			printf("HARD\n");
			return 0;
		}
	}
	printf("EASY\n");

	return 0;
}