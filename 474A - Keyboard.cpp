// https://codeforces.com/problemset/problem/1296/A
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
#define vvi vector<vector<int>>
#define MXINT (1<<30)
typedef long long ll;
using namespace std;

int main() {
	char k[] = { 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p',
			   'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';',
			   'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/' };
	char l;
	char s[200];
	scanf(" %c%s", &l, s);
	if (l == 'R') l = -1;
	else l = 1;
	for (int i = 0; i < strlen(s); ++i) {
		int j = -1;
		while (k[++j] != s[i]);
		printf("%c", k[j+l]);
	}
	printf("\n");
	return 0;
}