#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll tinh(ll a, ll b){
	if(b == 0) return 1;
	ll x = tinh(a,b/2);
	if(b%2 == 0) return (x*x)%mod;
	else return (x*x%mod)*a%mod;
}
void solve() {
	ll n, k; cin >> n >> k;
	ll a[n]; ll sum = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		sum = (sum + a[i]*tinh(k, n-i-1))%mod;
	}
	cout << sum << endl;
}
int main() {
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
