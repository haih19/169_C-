#include<bits/stdc++.h>
using namespace std;

void check(string s) {
	int le = 0, chan = 0;
	for(int i = 0; i < s.size(); i++) {
		if(i%2 == 0) le += s[i] - '0';
		else chan += s[i] - '0';
	}
	if((le-chan)%11 == 0) cout << 1 << endl;
	else cout << 0 << endl;
}
int main() {
	int t; cin >> t;
	while(t--) {
		string s; cin >> s;
		check(s);
	}
	return 0;
}
