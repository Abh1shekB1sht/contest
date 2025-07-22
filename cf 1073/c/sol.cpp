/**
  *  AUTHOR:    unix
  *  CREATED:   19.07.2025 13:29:33
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
		int ini = a[k - 1];
		sort(a.begin(), a.end());
		bool ok = false;
		for (int i = 0; i < n; i++) {
			if (a[i] > ini) {
				int cur = a[i] - ini;
				if (cur > a[i - 1]) ok = true;
			}
		}
		(ok) ? cout << "No" << '\n' : cout << "Yes" << '\n';
	}
	return 0;
}