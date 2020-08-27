#include<bits/stdc++.h>
#define ll long long 
using namespace std;

ll tinh(ll a, ll b,ll mod){
	if(b == 0) return 1;
	ll x = tinh(a,b/2,mod);
	if(b%2 == 0) return (x*x)%mod;
	else return (x*x%mod)*a%mod;
}
int main() {
	int t; cin >> t;
	while(t--) {
		ll a,b,c; cin >> a >> b >> c;
		cout << tinh(a,b,c) << endl;
	}
	return 0;
}
