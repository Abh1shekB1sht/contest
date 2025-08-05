/**
  *  AUTHOR:    unix
  *  CREATED:   31.07.2025 20:24:35
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
		map<int, int> mp;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			mp[a[i]]++;
		}
		int sum = accumulate(a.begin(), a.end(), 0);
		cout << sum + mp[0] << '\n';
	}
	return 0;
}