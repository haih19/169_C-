#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll fibo(ll n) {
	if(n <= 1) return n;
	ll a = 0, b = 1, c;
	for(int i = 2; i <= n; i++) {
		c = a+b;
		a = b;
		b = c;
	}
	return b;
}
void solve(ll n) {
	int i = 0;
	while(n > fibo(i)) i++;
	if(n == fibo(i)) cout << "YES" << endl;
	else cout << "NO" << endl;
}
int main() {
	int t; cin >> t;
	while(t--) {
		ll n; cin >> n;
		solve(n);
	}
	return 0;
}
