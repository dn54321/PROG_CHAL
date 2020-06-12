// https://codeforces.com/problemset/problem/431/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>

#define p1 first
#define p2 second
#define pii pair<int,int> 
#define MXINT (1<<30)

typedef long long ll;
using namespace std;


int main() {
	int a, b, c, d, res=0;
	char s[100001];
	scanf("%d%d%d%d", &a, &b, &c, &d);
	scanf("%s", &s);
	for (int i = 0; i < strlen(s); ++i) {
		if (s[i] == '1') res += a;
		else if (s[i] == '2') res += b;
		else if (s[i] == '3') res += c;
		else if (s[i] == '4') res += d;
	}
	printf("%d\n", res);
	return 0;
}