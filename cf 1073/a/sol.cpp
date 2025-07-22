/**
  *  AUTHOR:    unix
  *  CREATED:   19.07.2025 13:24:49
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int mini = INT_MAX;
		for (int i = 0; i < s.size(); i++) {
			mini = min(mini, s[i] - '0');
		}
		cout << mini << '\n';
	}
	return 0;
}