#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool check(ll n) {
	ll sum = 1;
	for(ll i = 2; i <= sqrt(n); i++) {
		if(n%i == 0) {
			if(i*i != n) sum = sum + i + n/i;
			else sum = sum + i;
		}
	}
	if(sum == n && n != 1) return 1;
	return 0;
}
int main() {
	int t; cin >> t;
	while(t--) {
		ll n; cin >> n;
		if(n > 1e12) cout << "0" << endl;
		else cout << check(n) << endl;
	}
	return 0;
}
