#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll ucln(ll a, ll b) {
	if(b == 0) return a;
	else return ucln(b,a%b);
}
ll bcnn(ll a, ll b) {
	return a*b/ucln(a,b);
}
int main() {
	int t; cin >> t;
	while(t--) {
		ll a, b; cin >> a >> b;
		cout << bcnn(a,b) << " " << ucln(a,b) << endl;
	}
	return 0;
}
