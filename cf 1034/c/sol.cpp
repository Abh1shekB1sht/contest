/**
  *  AUTHOR:    unix
  *  CREATED:   22.07.2025 14:48:41
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int mn = a[0], mx = a[n - 1];
		map<int, int> mp;
		mp[a[0]] = 1;
		mp[a[n - 1]] = 1;
		for (int i = 1; i < n; i++) {
			mn = min(mn, a[i]);
			mp[mn] = 1;
		}
		for (int i = n - 2; i >= 0; i--) {
			mx = max(mx, a[i]);
			mp[mx] = 1;
		}
		for (int i = 0; i < n; i++) {
			cout << (mp[a[i]] ? '1' : '0');
		}		
		cout << '\n';
	}
	return 0;
}