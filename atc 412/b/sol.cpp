/**
  *  AUTHOR:    unix
  *  CREATED:   21.07.2025 14:09:05
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
 	string s, t;
 	cin >> s >> t;
 	map<char, int> mp;
 	for (int i = 0; i < t.size(); i++) {
 		mp[t[i]]++;
 	}
 	bool ok = true;
 	for (int i = 1; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z' && mp[s[i - 1]] == 0) {
			ok = false;
			break;						
		} 	
 	}
 	if (ok) {
 		cout << "Yes" << '\n';
 	}
 	else {
 		cout << "No" << '\n';
 	}
	return 0;
}