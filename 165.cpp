#include<bits/stdc++.h>
using namespace std;

void solve(string s) {
	for(int i = 0; i < s.length(); i++) {
		if(s[i] != '+') {
			int dem = 1;
			for(int j = i + 1; j < s.length(); j++) {
				if(s[j] == s[i]) {
					s[j] = '+';
					dem++;
				}
			}
			if(dem != 1) s[i] = '+';
		}
	}
	for(int i = 0; i < s.length(); i++) {
		if(s[i] != '+') cout << s[i] << "";
	}
	cout << endl;
}
int main() {
	int t; cin >> t;
	while(t--) {
		string s; cin >> s;
		solve(s);
	}
	return 0;
}
