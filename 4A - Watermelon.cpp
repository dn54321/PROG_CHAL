// http://codeforces.com/problemset/problem/4/A
// SOLUTION BY DN54321

#include <iostream>
using namespace std;
int main()
{	
	int res;
	scanf("%d", &res);
	if (res > 2 && !(res % 2)) printf("YES\n");
	else printf("NO\n");

	return 0;
}