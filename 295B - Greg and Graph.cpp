// https://codeforces.com/problemset/problem/295/B
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <map>
#include <string>
#include <cmath>
#include <queue>

#define p1 first
#define p2 second
#define pii pair<ll,int>
#define vii vector<vector<ll>>
#define vi vector<ll>
#define vb vector<bool>
#define MXINT (1<<30)
#define MXLL (1LL<<60)
#define sz size
#define rsz resize
typedef long long ll;
using namespace std;

vector<vector<int>> a;
vii md;
vi res;
int n;


int main() {
	int x;
	scanf("%d", &n);
	a.resize(n);
	res.resize(n);
	md.resize(n);
	vector<int> c(n), z;
	for (int i = 0; i < n; ++i) {
		a[i].resize(n);
		md[i].resize(n, MXLL);
		for (int j = 0; j < n; ++j) {
			scanf("%d", &a[i][j]);
			md[i][j] = a[i][j];
		}
	}
	for (int i = n - 1; i >= 0; --i) scanf("%d", &c[i]);
	for (int k = 0; k < n; ++k) {
		x = c[k] - 1;
		z.push_back(x);
		ll dst = 0;
		for (int j = 0; j < n; ++j)
			for (int i = 0; i < n; ++i)
				if (md[i][j] > md[i][x] + md[x][j])
					md[i][j] = md[i][x] + md[x][j];
		for (int j : z) {
			for (int i : z)
				if (i != j && md[i][j] != MXINT) dst += md[i][j];
		}
		res[n - 1 - k] = dst;
	}
	for (int i = 0; i < n; ++i) printf("%I64d ", res[i]);
	printf("\n");
	return 0;
}