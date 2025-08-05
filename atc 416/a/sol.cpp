/**
  *  AUTHOR:    unix
  *  CREATED:   27.07.2025 13:51:00
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, a, b;
	cin >> n >> a >> b;
	string s;
	cin >> s;
	for (int i = a - 1; i < b; i++) {
		if (s[i] != 'o') {
			cout << "No" << '\n';
			return 0;
		}
	}
	cout << "Yes" << '\n';
	return 0;
}