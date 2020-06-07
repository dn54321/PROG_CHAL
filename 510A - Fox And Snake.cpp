// https://codeforces.com/problemset/problem/510/A
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
	int y, x;
	scanf("%d%d", &y, &x);
	for (int i = 0; i < y; ++i) {
		for (int j = 0; j < x; ++j) {
			if (!(i % 2)) printf("#");
			else if (!((i / 2) % 2) && j == x - 1) printf("#");
			else if (((i / 2) % 2) && j == 0) printf("#");
			else printf(".");
		}
		printf("\n");
	}
	return 0;
}