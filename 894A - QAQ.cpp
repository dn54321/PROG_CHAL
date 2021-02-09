// https://codeforces.com/problemset/problem/894/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <map>
#include <string>

#define p1 first
#define p2 second
#define pii pair<int,int> 
#define MXINT (1<<30)
#define sz size
typedef long long ll;
using namespace std;

int main() {
	char c;
	int x = 0;
	vector<char> s;
	string	rs;
	cin >> rs;

	for (int i = 0; i < rs.size(); ++i) {
		c = rs[i];
		;		if (c == 'Q' || c == 'A') s.push_back(c);
	}

	for (int i = 0; i < s.sz(); ++i)
		if (s[i] == 'Q')
			for (int j = i + 1; j < s.sz(); ++j)
				if (s[j] == 'A')
					for (int k = j + 1; k < s.sz(); ++k)
						if (s[k] == 'Q') ++x;
	cout << x;
	return 0;
}