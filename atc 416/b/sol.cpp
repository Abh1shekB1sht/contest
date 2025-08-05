/**
  *  AUTHOR:    unix
  *  CREATED:   27.07.2025 13:55:14
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s;
	cin >> s;
	string t = "";
	int cnt = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '#') t += '#', cnt++;
		else if (cnt > 0) {
			t += 'o';
			cnt = 0;
		}
		else t += s[i];
	}
	if (s[0] != '#') t[0] = 'o';
	cout << t << '\n';
	return 0;
}