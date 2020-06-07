// https://codeforces.com/problemset/problem/996/A
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
	int n, c=4, res=0;
	scanf("%d", &n);
	int m[] = { 1,5,10,20,100 };
	while (n != 0) {
		if (n >= m[c]) {
			n -= m[c];
			++res;
		}
		else
			--c;
	}
	printf("%d\n", res);
}