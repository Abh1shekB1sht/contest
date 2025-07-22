/**
  *  AUTHOR:    unix
  *  CREATED:   21.07.2025 14:27:25
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
		vector<int> used(n, 0);
		int ans = 1, last = 0;
		while (true) {
			if (a[last] * 2 >= a[n - 1]) {
				ans += 1;
				break;				
			}
			int nxt = -1;
			for (int i = 1; i < n; i++) {
				if (used[i]) continue;
				if (a[last] * 2 >= a[i]) {
					if (nxt != -1 && a[last] >= a[i]) continue;
					nxt = i;
				}			
			}
			if (nxt == -1 || a[nxt] <= a[last]) {
				cout << -1 << '\n';
				break;
			}
			ans++, last = nxt, used[nxt] = 1;
		}
		cout << ans << '\n';
	}
	return 0;
}