// https://codeforces.com/problemset/problem/271/A
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
	int n;
	scanf("%d", &n);
	bool distinct = 0;
	while (!distinct) {
		distinct = 1;
		++n;
		bool visited[10] = { 0 };
		int tmp = n;
		while (tmp != 0) {
			if (!visited[tmp % 10]) visited[tmp % 10]=1;
			else {
				distinct = 0;
				break;
			}
			tmp /= 10;
		}
	}
	printf("%d", n);
	return 0;
}