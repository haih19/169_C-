#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll ucln(ll a, ll b) {
	if(b == 0) return a;
	else return ucln(b,a%b);
}
ll bcnn(ll n) {
	ll c = 1;
	for(int i = 1; i <= n; i++) {
		c = c*i/ucln(c,i);
	}
	return c;
}
int main() {
	int t; cin >> t;
	while(t--) {
		ll n; cin >> n;
		cout << bcnn(n) << endl;
	}
	return 0;
}
