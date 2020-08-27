#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll a[], ll n) {
	int count = 0;
	for(int i = 0; i < n; i++) {
		if(a[i] != 0)	a[count++] = a[i];
	}
	while(count < n) a[count++] = 0;
}
int main() {
	int t; cin >> t;
	while(t--) {
		ll n; cin >> n; ll a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		solve(a,n);
		for(int i = 0; i < n;i++)
		    cout << a[i] << " ";
		cout << endl;
	}
}
