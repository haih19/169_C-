#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll b,p; cin >> b >> p;
	if(p == 1) cout << "0" << endl;
	else {
		ll ans = 0;
		for(ll i = 1; i <= b && i <= p ; i++) {
			if(i*i%p == 1) {
				ans++ ;
				ans += (b-i)/p;
			}
		}
		cout << ans << endl;
	}
}
int main() {
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
