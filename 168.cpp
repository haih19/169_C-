#include<bits/stdc++.h>
using namespace std;

void solve(string s) {
	stack<string> st;
	for(int i = 0; i < s.length(); i++){
		string x;
		while(s[i] != ' ' && i < s.length()){
			x += s[i];
			i++;
		}
		st.push(x);
	}
	while(!st.empty()){
		string res = st.top();
		cout << res << " ";
		st.pop();
	}
	cout << endl;
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; getline(cin, s);
	    solve(s);
	}
	return 0;
}
