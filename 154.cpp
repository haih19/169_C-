#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll A,B;

ll change_to_5(ll x){
	ll res = 0;
	ll n = 1;
	while(x){
		ll tmp = x%10;
		if( tmp == 6) tmp = 5;
		res += tmp*n;
		x = x / 10;
		n = n * 10;
	}
	return res;
}

ll change_to_6(ll x){
	ll res = 0;
	ll n = 1;
	while(x){
		ll tmp = x%10;
		if( tmp == 5) tmp = 6;
		res += tmp*n;
		x = x / 10;
		n = n * 10;
	}
	return res;
}

void solve(){
	cout << change_to_5(A) + change_to_5(B) << " " << change_to_6(A) + change_to_6(B) << endl;
}

int main(){
	int t; cin >> t;
	while(t--) {
		cin >> A >> B;
	    solve();
	}
	return 0;
}
