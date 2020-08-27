#include<bits/stdc++.h>
using namespace std;

bool kiemtra(int a[], int n, int x) {
	sort(a, a+n);
	int i = 0, j = 1;
	while(i < n && j < n) {
		if(i != j && a[j] - a[i] == x) return 1;
		else if(a[j] - a[i] < x) j++;
		else i++;
	}
	return 0;
}
int main() {
	int t; cin >> t;
	while(t--) {
		int n, x; cin >> n >> x; int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		if(kiemtra(a,n,x) == 0) cout << -1 << endl;
		else if(kiemtra(a,n,x) == 1) cout << 1 << endl;
	}
	return 0;
}
