#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll tinh(ll n) {
	ll max = -1;
	while(n%2 == 0) {
		max = 2;
		n /= 2;
	}
	for(int i = 3; i <= sqrt(n); i += 2) {
		while(n%i == 0) {
			max = i;
			n /= i;
		}
	}
	if(n > 2) max = n;
	return max;
}
int main() {
	int t; cin >> t;
	while(t--) {
		ll n; cin >> n;
		cout << tinh(n) << endl;
	}
	return 0;
}
