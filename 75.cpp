#include<bits/stdc++.h>
using namespace std;
void solve() {
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a,a+n);
	cout << a[n-1] << " " << endl;
}
int main() {
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
