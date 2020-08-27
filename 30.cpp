#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s; cin >> s;
	ll m; cin >> m;
	ll mod  = 0;
	for(int i = 0; i < s.length(); i++) {
		mod = (mod*10 + s[i]-'0')%m;
	}
	cout << mod << endl;
}
int main() {
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
