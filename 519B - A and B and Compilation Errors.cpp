// https://codeforces.com/problemset/problem/519/B
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
	int n, x;
	map<int, int> mf;
	map<int, int> cf;
	scanf("%d", &n);
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < n; ++j) {
			scanf("%d", &x);
			if (!i) {
				if (mf.count(x)) ++mf[x];
				else mf[x] = 1;
			}
			else {
				if (cf.count(x)) ++cf[x];
				else cf[x] = 1;
			}
		}
		--n;
		if (i)
			for (auto it = mf.begin(); it != mf.end(); ++it) {
				if (cf.count(it->p1)) {
					if (cf[it->p1] != it->p2) {
						printf("%d\n",it->p1);
						--it->p2;
					}
					cf[it->p1] = 0;
				}
				else {
					printf("%d\n", it->p1);
					--it->p2;
					cf[it->p1] = 0;
				}
			}
	}
	return 0;
}