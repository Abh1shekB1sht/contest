/**
  *  AUTHOR:    unix
  *  CREATED:   30.07.2025 21:09:15
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int64_t n, c;
		cin >> n >> c;
		vector<int64_t> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a.rbegin(), a.rend());
		int64_t ans = 0, k = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] * pow(2, k) <= c) {
				k++;
			}
			else {
				ans++;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}