// https://codeforces.com/problemset/problem/1399/A
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

typedef long long ll;
using namespace std;


int main() {
	int n, x = 0;
	vector<int> l;
	vector<int> s;
	scanf("%d", &n);
	l.resize(n);
	for (int i = 0; i < n; ++i) scanf("%d", &l[i]);
	for (int i = 1; i < n - 1; ++i)
		if (l[i - 1] && !l[i] && l[i + 1]) s.push_back(i);
	for (int i = 0; i < s.size(); ++i) {
		++x;
		if (i + 1 < s.size() && s[i + 1] - s[i] == 2) ++i;
	}
	printf("%d\n", x);
	return 0;
}