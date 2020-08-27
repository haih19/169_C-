#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(string s) {
	ll kq = 0;
	for(int i = 0; i < s.size(); i++)
	    kq = ((kq*2 + s[i]-'0')%5);
	if(kq%5 == 0) cout << "Yes" << endl;
	else cout << "No" << endl;
}
int main() {
	int t; cin >> t;
	while(t--) {
		string s; cin >> s;
		solve(s);
	}
	return 0;
}
