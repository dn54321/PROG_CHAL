// https://codeforces.com/problemset/problem/732/A
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
#define MXINT (1<<30)
typedef long long ll;
using namespace std;

int main() {
	int n, k,i;
	scanf("%d%d", &n, &k);
	for (i = 1; ((n*i)%10) && ((n*i-k) % 10); ++i);
	printf("%d\n", i);
	return 0;
}