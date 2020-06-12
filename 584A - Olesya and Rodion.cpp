// https://codeforces.com/problemset/problem/584/A
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
	int n, t;
	scanf("%d%d",&n,&t);
	if (t == 10 && n == 1) printf("-1\n");
	else {
		if (t == 10) t = 1;
		printf("%d", t);
		for (int i = 1; i < n; ++i) printf("0");
		printf("\n");
	}
}