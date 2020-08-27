#include<bits/stdc++.h>
using namespace std;

string tong(string a, string b){
	if(a.length() < b.length()) swap(a,b);
	while(b.length() < a.length()) b = '0' + b;
	int temp = 0;
	string s = "";
	for(int i=a.length()-1; i >= 0; i--){
		temp = (temp + a[i]-'0' + b[i]  -'0');
		s = char(temp%10  +'0') + s;
		temp /= 10;
	}
	if(temp) s = '1' + s;
	return s;
}
 
int main(){
	int t; cin >> t;
	while(t--) {
		string a,b; cin >> a >> b;
		cout << tong(a,b) << endl;
	}
	return 0;
}
