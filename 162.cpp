#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		string s;
		cin.ignore();
		getline(cin,s);
		int dem = 1;
		for(int i = 0; i < s.size(); i++) {
			if(s[i] == ' ' || s[i] == '\t'|| s[i] == '\n') dem++;
		}
		cout << dem << endl;
	}
	return 0;
}
