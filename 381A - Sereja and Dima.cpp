// https://codeforces.com/problemset/problem/381/A
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
	int n;
	scanf("%d", &n);
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		scanf("%d", &v[i]);
	int l = 0, r = n-1, i = 0;
	int p[2] = { 0 };
	while (l <= r) {
		if (v[l] > v[r])  p[i] += v[l++];
		else p[i] += v[r--];
		i = 1 - i;
	}
	printf("%d %d", p[0], p[1]);
	return 0;
}