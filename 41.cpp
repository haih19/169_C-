#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

int fibo(int n) {
	if(n <= 1) return n;
	int a = 0, b = 1, c;
	for(int i = 2; i <= n; i++) {
		c = (a+b)%mod;
		a = b;
		b = c;
	}
	return b%mod;
}
int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		cout << fibo(n) << endl;
	}
	return 0;
}
