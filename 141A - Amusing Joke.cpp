// https://codeforces.com/problemset/problem/141/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <map>

typedef long long ll;
using namespace std;

void add(char* s, int* arr) {
	for (int i = 0; i < strlen(s); ++i)
		++arr[s[i] - 'A'];
}

int main() {
	char s1[200], s2[200], s3[200];
	int arr[26] = { 0 };
	scanf("%s%s%s", s1, s2, s3);
	add(s1, arr);
	add(s2, arr);
	if (strlen(s1) + strlen(s2) - strlen(s3)) {
		printf("NO\n");
		return 0;
	}
	for (int i = 0; i < strlen(s3); ++i) {
		if (!arr[s3[i] - 'A']--) {
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}