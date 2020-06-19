// https://codeforces.com/problemset/problem/1325/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <map>

#define p1 first
#define p2 second
#define pii pair<int,int> 
#define MXINT (1<<30)

typedef long long ll;
using namespace std;


int main() {
	int t, x;
	scanf("%d", &t);
	for (int tc = 0; tc < t; ++tc) {
		scanf("%d", &x);
		printf("1 %d\n", x - 1);
	}
	return 0;
}