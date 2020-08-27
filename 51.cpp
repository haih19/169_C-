#include<bits/stdc++.h>
#define ll long long
using namespace std;

void SapXep(ll n, ll a[], ll kq[]) {
	for (ll i = 0; i < n; i++) {
		ll j;
		for (j = 0; j < n; j++) {
			if(a[j] == i) break;
		}
		if(a[j] == i)	kq[i] = i;
		else	        kq[i] = -1;
	}
}
int main() {
	int t; cin >> t;
	while(t--) {
		ll n; cin >> n;
		ll a[n], kq[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		SapXep(n,a,kq);
		for(int i = 0; i < n; i++) 
		    cout << kq[i] << " ";
		cout << endl;
	}
	return 0;
}
