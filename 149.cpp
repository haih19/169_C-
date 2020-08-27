#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		string str; cin >> str;
		set<char> s;
		for(int i = 0; i < str.length(); i++) s.insert(str[i]);
		int k; cin >> k;
		int thieu = 26 - s.size();
		int thua = str.length() - s.size();
		if(k >= thieu && thua >= thieu) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}
