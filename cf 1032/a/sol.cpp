/**
  *  AUTHOR:    unix
  *  CREATED:   22.07.2025 17:05:01
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
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		if (s - a[0] <= a[n - 1] - s) {
			cout << abs(s - a[0]) + a[n - 1] - a[0] << '\n';			
		}
		else {
			cout << abs(a[n - 1] - s) + a[n - 1] - a[0] << '\n';			
		}
	}
	return 0;
}