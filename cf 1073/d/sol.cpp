/**
  *  AUTHOR:    unix
  *  CREATED:   19.07.2025 14:22:47
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int64_t n, k;
		cin >> n >> k;
		vector<array<int64_t, 3>> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i][0] >> a[i][1] >> a[i][2];
		}	
		sort(a.begin(), a.end());
		for (int i = 0; i < n; i++) {
			if (k >= a[i][0] && k <= a[i][1]) {
				k = max(k, a[i][2]);
			}			
		}
		cout << k << '\n';
	}
	return 0;
}
