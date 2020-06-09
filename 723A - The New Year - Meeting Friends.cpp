// https://codeforces.com/problemset/problem/723/A
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
	vector<int> v(3);
	int mn = 101, mx = 0, res=101;
	for (int i = 0; i < 3; ++i) {
		scanf("%d", &v[i]);
		if (mx < v[i]) mx = v[i];
		if (mn > v[i]) mn = v[i];
	}
	for (int i = mn; i <= mx; ++i) {
		int x=0;
		for (int j = 0; j < 3; ++j) {
			x += abs(v[j] - i);
		}
		if (res > x) res = x;
	}
	printf("%d", res);
	return 0;
}