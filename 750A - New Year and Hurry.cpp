// https://codeforces.com/problemset/problem/750/A
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
	int n,k,res=0;
	scanf("%d%d", &n,&k);
	int tot = 4 * 60 - k;
	for (int i = 1; tot > 0 && n > 0; ++i) {
		tot -= i * 5;
		if (tot>=0) ++res;
		--n;
	}
	printf("%d", res);
	return 0;
}