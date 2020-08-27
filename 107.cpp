#include<bits/stdc++.h>
using namespace std;

void solve(int a[], int n) {
	sort(a,a+n);
	int dem = 0;
	for(int i = a[0] + 1; i < a[n-1]; i++) {
		if(binary_search(a, a+n-1,i) == 0)
		   dem++;
	}
	cout << dem << endl;
}
int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		solve(a,n);
	}
	return 0;
}
