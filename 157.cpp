#include<bits/stdc++.h>
using namespace std;

int solve(string s) {
	int num = 0, res = 0;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] >= '0' && s[i] <= '9' ) {
			num = num * 10 + s[i]-'0';
		}
		else {
			res = max(res,num);
			num = 0;
		}
	}
	return max(res, num);
}
int main() {
	int t; cin >> t;
	while(t--) {
		string s; cin >> s;
		cout << solve(s) << endl;
	}
	return 0;
}
