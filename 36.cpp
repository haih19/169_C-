#include<bits/stdc++.h>
#define ll long long 
using namespace std;

ll tinh(ll a, ll b, ll c) {
	if(b == 0) return 0;
	ll s = tinh(a, b/2, c);
	if(b%2 == 0) return (2*s%c)%c;
	else return (a%c + 2*s%c)%c;
}
int main() {
	int t; cin >> t;
	while(t--) {
		ll a,b,c; cin >> a >> b >> c;
		cout << tinh(a,b,c) << endl;
	}
	return 0;
}
