// https://codeforces.com/problemset/problem/1385/A
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
		scanf("%d%d%d", &ct[0],&ct[1],&ct[2]);
		sort(ct.begin(), ct.end());
		if (ct[1] == ct[2] && ct[1] >= ct[0]) printf("YES %d %d %d\n", ct[0], ct[0], ct[2]);
		else printf("NO\n");
	}
	return 0;
}