#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll ucln(ll a, ll b) {
	if(b == 0) return a;
	else return ucln(b,a%b);
}
ll ucln1(ll a, string b) {
	ll mod = 0;
	for(int i = 0; i < b.length(); i++) {
		mod = (mod * 10 + b[i] - '0')%a;
	}
	return mod;
}
ll ucln2(ll a, string b) {
	ll c = ucln1(a,b);
	return ucln(a,c);
}
int main() {
	int t; cin >> t;
	while(t--) {
		ll a; cin >> a;
		string b; cin >> b;
		cout << ucln2(a,b) << endl;
	}
	return 0;
}
