// https://codeforces.com/problemset/problem/1367/A
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
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; ++i) {
		char s[200];
		scanf("%s", s);
		printf("%c%c", s[0], s[1]);
		for (int j = 3; j < strlen(s); j+=2) {
			printf("%c", s[j]);
		}
		printf("\n");
	}
	return 0;
}