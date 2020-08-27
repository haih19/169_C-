#include<bits/stdc++.h>
using namespace std;

void hieu(string a, string b) {
	if(a.length() < b.length()) swap(a,b);
	if(a.length() == b.length() && a < b) swap(a,b);
	while(b.length() < a.length()) b = '0' + b;
	int temp = 0;
	string s = "";
	for(int i = a.length()-1; i >= 0; i--) {
		if(a[i]-b[i]-temp >= 0) {
		   s = (char)(a[i]-b[i]-temp+'0') + s;
		   temp = 0;
		}
		else {
			s = (char)(a[i]-b[i]-temp+10+'0') + s;
			temp = 1;
		}
	}
	cout << s << endl;
}
int main() {
	int t; cin >> t;
	while(t--) {
		string a,b; cin >> a >> b;
		hieu(a,b);
	}
	return 0;
}


