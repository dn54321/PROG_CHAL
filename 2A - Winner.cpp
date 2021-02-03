// https://codeforces.com/problemset/problem/2/A
// SOLUTION BY DN54321

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <map>
#include <string>
#include <set>

#define p1 first
#define p2 second
#define pii pair<int,int> 
#define MXINT (1<<30)
#define MXLL (1LL<<60)

typedef long long ll;
using namespace std;

int main() {
	int n, x, id, u, i;
	int ctr = 0;
	int mx = -MXINT;
	string s;
	vector<string> itos;
	map<string, int> stoi;
	vector<vector<pii>> arr;
	vector<int> ct;
	cin >> n;
	while (n--) {
		cin >> s >> x;
		auto it = stoi.find(s);
		if (it != stoi.end()) {
			id = it->p2;
			x += arr[id].back().p1;
			for (i = 0; i < arr[id].size(); ++i) {
				if (arr[id][i].p1 >= x) {
					ct[id] = arr[id][i].p2;
					break;
				}
			}
			if (i == arr[id].size()) {
				ct[id] = -n;
			}
			arr[id].push_back(pii(x, -n));
		}
		else {
			stoi[s] = ctr++;
			itos.push_back(s);
			vector<pii> a;
			a.push_back(pii(x,-n));
			arr.push_back(a);
			ct.push_back(-n);
		}
	}
	int mn = MXINT;
	int mni = -1;
	for (int i = 0; i < arr.size(); ++i)
		if (arr[i].back().p1 > mx) mx = arr[i].back().p1;
	for (int i = 0; i < arr.size(); ++i) {
		x = arr[i].back().p1;
		if (x == mx) {
			if (ct[i] < mn) {
				mn = ct[i];
				mni = i;
			}
		}
	}
	cout << itos[mni] << endl;

	return 0;
}