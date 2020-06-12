// https://codeforces.com/problemset/problem/1311/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>

#define p1 first
#define p2 second
#define pii pair<int,int> 
#define MXINT (1<<30)

typedef long long ll;
using namespace std;


int main() {
	int t, a, b;
	scanf("%d", &t);
	for (int tc = 0; tc < t; ++tc) {
		scanf("%d%d", &a, &b);
		if (a == b) printf("0\n");
		else if ((a+b)%2 && b > a) printf("1\n");
		else if (!((a+b)%2) && b < a) printf("1\n");
		else printf("2\n");
	}
	return 0;
}