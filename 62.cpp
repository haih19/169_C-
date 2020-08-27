#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll solve(ll a[], ll n) {
	ll max = a[0];
	ll s;
	for(int i = 0; i < n; i++) {
		s = 1;
		for(int j = i; j < n; j++) {
			s = s * a[j];
			if(s > max) max = s;
		}
	}
	return max;
}
int main() {
	int t; cin >> t;
	while(t--) {
		ll n; cin >> n; ll a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		cout << solve(a,n) << endl;
	}
	return 0;
}

