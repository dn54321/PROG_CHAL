// https://codeforces.com/problemset/problem/705/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
	char s1[] = "I hate";
	char s2[] = "I love";
	char s3[] = " it\n";
	char s4[] = " that ";
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		if (i % 2) printf("%s", s2);
		else printf("%s", s1);
		if (i + 1 < n) printf("%s", s4);
	}
	printf("%s", s3);

	return 0;
}