// https://codeforces.com/problemset/problem/363/B
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
	int n, k;
	vector<int> f;
	scanf("%d%d", &n, &k);
	f.resize(n);
	int tot = 0, mn, mni;
	for (int i = 0; i < n; ++i) scanf("%d", &f[i]);
	for (int i = 0; i < k; ++i) tot += f[i];
	mn = tot, mni = 1;
	for (int i = k; i < n; ++i) {
		tot += f[i] - f[i - k];
		if (mn > tot) {
			mn = tot;
			mni = i - k + 2;
		}
	}
	printf("%d\n", mni);
	return 0;
}