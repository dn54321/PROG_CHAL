// https://codeforces.com/problemset/problem/228/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <map>
#define MXINT 1<<30
typedef long long ll;
using namespace std;

int main() {
	map<int, int> m;
	int x, dtn=0;
	for (int i = 0; i < 4; ++i) {
		scanf("%d", &x);
		if (m.find(x) == m.end()) {
			++dtn;
			++m[x] = 1;
		}
	}
	printf("%d\n", 4 - dtn);
	return 0;
}