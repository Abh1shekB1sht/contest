/**
  *  AUTHOR:    unix
  *  CREATED:   19.07.2025 13:26:03
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		vector<int> prefix(n);
		prefix[0] = (a[0] == 0) ? 1 : 0;
		for (int i = 1; i < n; i++) {
			prefix[i] = (a[i] == 0) ? prefix[i - 1] + 1 : 0;
			if (prefix[i] > k) prefix[i] = 0;
		}
		int ans = 0;
		for (int i = 0; i < n; i++) {
			ans += (prefix[i] == k);
		}		                    	
		cout << ans << '\n';
	}
	return 0;
}