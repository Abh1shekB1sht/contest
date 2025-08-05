/**
  *  AUTHOR:    unix
  *  CREATED:   01.08.2025 12:55:19
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
		vector<array<int, 3>> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i][0] >> a[i][1];
			a[i][2] = i + 1;
		}
		auto cmp = [](auto x, auto y) {
			if (x[0] == y[0]) return x[1] > y[1];
			return x[0] < y[0];
		};
		sort(a.begin(), a.end(), cmp);
		vector<int> ans;
		int cur = 0;
		for (int i = 0; i < n; i++) {
			if (a[i][0] != cur) {
				cur = a[i][0];
				ans.push_back(a[i][2]);
			}
		}
		cout << ans.size() << '\n';
		sort(ans.begin(), ans.end());
		for (auto &i : ans) {
			cout << i << ' ';
		}
		cout << '\n';
	}
	return 0;
}