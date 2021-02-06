// https://codeforces.com/problemset/problem/151/A
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
	int p[8];
	for (int i = 0; i < 8; ++i)
		scanf("%d", p + i);
	int dnum = p[1] * p[2] / (p[0]*p[6]);
	int lnum = p[3] * p[4] / p[0];
	int snum = p[5] / (p[0] * p[7]);
	printf("%d\n", min(dnum, min(lnum, snum)));

	return 0;
}