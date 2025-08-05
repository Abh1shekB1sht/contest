/**
  *  AUTHOR:    unix
  *  CREATED:   31.07.2025 21:04:38
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n, s;
		cin >> n >> s;
		vector<int> a(n);
		map<int, int> mp;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			mp[a[i]]++;
		}
		if (mp[0] == 1 && mp[1] == 1 && mp[2] == 1 && s == 3) {
			cout << -1 << '\n';
			continue;			
		}
	}
	return 0;
}