// http://codeforces.com/problemset/problem/1/A
// SOLUTION BY DN54321

#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;
int main()
{
	int i, j, k;
	scanf("%d%d%d", &i, &j, &k);
	ll res = 1LL*(i/k + (i%k?1:0)) * (j/k + (j%k?1:0));
	printf("%lld\n", res);
	return 0;
}