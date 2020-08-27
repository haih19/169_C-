#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	while(n%2 == 0) {
		cout << 2 << " ";
		n /= 2;
	}
	for(int i = 3; i <= sqrt(n); i += 2) {
		while(n%i == 0) {
			cout << i << " ";
			n /= i;
		}
	}
	if(n > 2) cout << n << " ";
}
int main() {
	int t; cin >> t;
	while(t--) {
		solve();
		cout << endl;
	}
	return 0;
}
