#include<bits/stdc++.h>
using namespace std;

int solve(int a[], int n, int k) {
	int dem = 0;
	for(int i = 0; i < n; i++) {
		if(a[i] == k) dem++;
	}
	return dem;
}
int main() {
	int t; cin >> t;
	while(t--) {
		int n,k; cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int res = solve(a,n,k);
		if(res == 0) cout << "-1" << endl;
		else cout << res << endl;
	}
	return 0;
}
