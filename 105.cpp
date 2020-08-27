#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll a[], ll b[], ll n, ll m) {
	sort(a,a+n);
	sort(b,b+m);
	cout << a[n-1]*b[0] << endl;
}
int main() {
	int t; cin >> t;
	while(t--) {
		ll n,m ; cin >> n >> m;
		ll a[n], b[m];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < m; i++) cin >> b[i];
		solve(a,b,n,m);
	}
	return 0;
}
