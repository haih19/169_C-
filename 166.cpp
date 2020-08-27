#include<bits/stdc++.h>
using namespace std;

string s;
int dem = 0;
void solve(int x) {
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == '1' && s[i+1] == '0' && s[i+2] == '0') {
			s.erase(i,3);
			dem += 3;
			solve(x+1);
		}
	}
}
int main() {
	int t; cin >> t;
	while(t--) {
		cin >> s;
		dem = 0;
		solve(1);
		cout << dem << endl;
	}
	return 0;
}
