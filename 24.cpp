#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void sang(ll m, ll n) {
	n = sqrt(n);
	bool f[n+1];
	memset(f,1,sizeof(f));
	f[0] = f[1] = 0;
	for(ll i = 2; i <= n; i++) f[i] = 1;
	for(ll i = 2; i <= sqrt(n); i++) {
		if(f[i] == 1) {
			for(ll j = 2*i; j <=n; j += i) {
				f[j] = 0;
			}
		}
	}
	ll dem = 0;
	for(ll i = m;i <= n; i++) {
		if(f[i]) dem++;
	}
	cout << dem << endl;
}
int main() {
	int t; cin >> t;
	while(t--) {
		ll m,n; cin >> m >> n;
		sang(m,n);
	}
	return 0;
}
