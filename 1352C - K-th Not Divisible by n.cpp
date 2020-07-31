// https://codeforces.com/problemset/problem/1352/C
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
#define MXLL (1LL<<60)

typedef long long ll;
using namespace std;


int main() {
	int t,n,k;
	vector<int> ct(3);
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &k);
		int x = ((k-1) % (n - 1))+1;
		int y = (k-1) / (n - 1);
		printf("%d\n", y * n + x);

	}
	return 0;
}