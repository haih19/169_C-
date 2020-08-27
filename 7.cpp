#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll LCM(ll x, ll y, ll z) {
	ll t = x*y/__gcd(x,y);
	return z*t/__gcd(z,t);
}
ll tim(ll x, ll y, ll z, ll n) {
	ll bcnn = LCM(x,y,z);
	ll mins = pow(10,n-1);
	ll du = mins%bcnn;
	if(du == 0) return mins;
    mins += bcnn - du;
    if(mins >= pow(10,n)) return -1;
    return mins;
}
int main() {
	int t; cin >> t;
	while(t--) {
		ll x, y, z, t; cin >> x >> y >> z >> t;
		cout << tim(x,y,z,t) << endl;
	}
	return 0;
}
