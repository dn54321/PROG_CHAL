// 1348A - Phoenix and Balance
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
	int tc,n,n1,n2,a,b;
	scanf("%d", &tc);
	for (int i = 0; i < tc; ++i) {
		scanf("%d", &n);
		n1 = n / 2 - 1;
		n2 = n / 2;
		a = 2*(pow(2, n1) - 1) + pow(2, n);
		b = pow(2, n2) * (pow(2, n2) - 1);
		printf("%d\n", a - b);
	}
	return 0;
}