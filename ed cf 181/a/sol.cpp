/**
  *  AUTHOR:    unix
  *  CREATED:   23.07.2025 00:07:00
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
		vector<int> ch(26, 0);
		bool ok = false;
		for (int i = 0; i < s.size(); i++) {
			if ((s[i] == 'F' && s[i + 1] == 'F' && s[i + 2] == 'T') || (s[i] == 'N' && s[i + 1] == 'T' && s[i + 2] == 'T')) {
				ok = true;
				break;
			}
		}
		if (ok) {
  		for (int i = 0; i < s.size(); i++) {
  			ch[s[i] - 'A']++;
  		}
  		for (int i = 25; i >= 0; i--) {
  			cout << string(ch[i], i + 'A');
  		}
  		cout << '\n';
  	}
  	else {
  		cout << s << '\n';
  	}
	}
	return 0;
}