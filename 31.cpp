#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll tinh(ll a, ll b,ll mod){
	if(b == 0) return 1;
	ll x = tinh(a,b/2,mod);
	if(b%2 == 0) return (x*x)%mod;
	else return (x*x%mod)*a%mod;
}
ll giam(string a, ll m) {
	ll mod = 0;
	for(int i = 0; i < a.length(); i++) {
		mod = (mod*10 + a[i]-'0')%m;
	}
	return mod;
}
void solve() {
	string a; ll b, m;
	cin >> a >> b >> m;
	ll x = giam(a,m);
	cout << tinh(x,b,m) << endl;
}
int main() {
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
