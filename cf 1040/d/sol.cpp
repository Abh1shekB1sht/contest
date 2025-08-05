/**
 *  AUTHOR:    Abhishek
 *  CREATED:   05.08.2025 16:17:37
**/
#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5 + 5;
int a[maxN], ind[maxN];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			ind[a[i]] = i;
		}
		int ans = 0;
		for (int i = 1; i <= n; i++) {
			int lf = 0, rg = 0;
			for (int j = ind[i] - 1; j >= 1; j--) {
				if (a[j] > i) lf++;
			}
			for (int j = ind[i] + 1; j <= n; j++) {
				if (a[j] > i) rg++;
			}
			ans += min(lf, rg);
		}
		cout << ans << '\n';
	}
	return 0;
}