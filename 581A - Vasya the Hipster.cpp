// https://codeforces.com/problemset/problem/581/A
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
	int n, k;
	scanf("%d%d", &n, &k);
	int resa = min(n, k);
	int resb = abs(n - k) / 2;
	printf("%d %d", resa, resb);
	return 0;
}