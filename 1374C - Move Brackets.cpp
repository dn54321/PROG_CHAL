// https://codeforces.com/problemset/problem/1374/C
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
	int t;
	vector<int> ct(3);
	scanf("%d", &t);
	while (t--) {
		char s[55];
		int ct = 0, res=0, n;
		scanf("%d %s", &n, s);
		for (int i = 0; i < n; ++i) {
			if (s[i] == '(') ++ct;
			else if (s[i] == ')' && ct > 0) --ct;
			else ++res;
		}
		printf("%d\n", res);
		
	}
	return 0;
}