// https://codeforces.com/problemset/problem/122/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
typedef long long ll;
using namespace std;

bool getNext(int n, int b) {
	n = n * 10 + 4;
	bool flag=false;
	if (b % n == 0) return true;
	else if (n < 100) flag = getNext(n, b);
	n += 3;
	if (flag) return true;
	else if (b % n == 0) return true;
	else if (n < 100) return getNext(n, b);
	return false;
}
int main() {
	int n;
	scanf("%d", &n);
	if (getNext(0, n)) printf("YES\n");
	else printf("NO\n");
	return 0;
}