#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n;
vector <ll> a;
ll res(){
	cin >> n;
	a.resize(n);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	a[2] += a[0];
	for(int i = 3 ; i < n ; ++i)
		a[i] += max(a[i-2], a[i-3]);
	return *max_element(a.begin(),a.end());
}

int main(){
	int t; cin >> t;
	while(t--) {
		cout << res() << endl;
	}
	return 0;
}
