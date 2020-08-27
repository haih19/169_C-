#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll ucln(ll a[], ll n) {
	ll ans = a[0];
	for(int i = 1; i < n; i++) {
		ans = __gcd(ans,a[i]);
	}
	return ans;
}
ll tich(ll a[], ll n) {
	ll ans = a[0];
	for(int i = 1; i < n; i++) {
		ans = (ans*a[i])%mod;
	}
	return ans;
}
ll tinh_mu(ll a, ll b) {
	if(b == 0) return 1;
	ll c = tinh_mu(a, b/2);
	if(b%2 == 0) return (c*c)%mod;
	else return (c*c%mod)*a%mod;
}
int main() {
	int t; cin >> t;
	while(t--) {
		ll n ; cin >> n; ll a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		cout << tinh_mu(tich(a,n), ucln(a,n)) << endl;
	}
	return 0;
}
