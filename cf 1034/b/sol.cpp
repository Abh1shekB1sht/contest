/**
  *  AUTHOR:    unix
  *  CREATED:   22.07.2025 14:00:35
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n, j, k;
		cin >> n >> j >> k;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int tmp = a[j - 1];
		sort(a.begin(), a.end());
		if (tmp == a[0] && k == 1) {
			int sm = 0;
  		for (int i = 0; i < n; i++) {
  			if (a[i] == tmp) sm++;
  			else break;
			}
			cout << (sm == n ? "YES" : "NO") << '\n';				
		}
		else if (tmp == a[n - 1] || k != 1) {
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
		}
	}	
	return 0;
}