#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n,k; cin >> n >> k;
	ll ans = 0;
	for(int i = 1; i <= n; i++) {
		ans += i%k;
	}
	cout << ans << endl;
}
int main() {
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
