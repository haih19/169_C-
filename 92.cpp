#include<bits/stdc++.h>
using namespace std;

void solve(int a[], int n) {
	sort(a,a+n);
	int diff = INT_MAX;
	for(int i = 0; i < n-1; i++) {
		if(a[i+1]-a[i] < diff)
		   diff = a[i+1] - a[i];
	}
	cout << diff << endl;
}
int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n; int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		solve(a,n);
	}
	return 0;
}
