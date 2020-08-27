#include<bits/stdc++.h>
using namespace std;

string tich(string a, string b) {
   if (a=="0" || b=="0") return "0";
   int m = a.size() - 1, n = b.size() - 1, carry = 0;
   string s = "";
   for (int i=0; i<=m+n || carry; ++i) {
        for (int j=max(0, i-n); j<=min(i, m); ++j) {
            carry += (a[m-j] - '0') * (b[n-i+j] - '0');
            s += carry % 10 + '0';
            carry /= 10;
        }
    reverse(s.begin(), s.end());
    }
    return s;
}
int main() {
	int t; cin >> t;
	while(t--) {
		string a,b; cin >> a >> b;
		cout << tich(a,b) << endl;
	}
	return 0;
}
