/**
  *  AUTHOR:    unix
  *  CREATED:   21.07.2025 14:26:43
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		ans += (x < y);
	}
	cout << ans << '\n';
	return 0;
}