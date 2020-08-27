#include<bits/stdc++.h>
using namespace std;

void solve(int a[], int b[], int c[], int n, int m) {
	int i = 0, j = 0, k = 0;
	while(i < n) {
		c[k] = a[i];
		k++;
		i++;
	}
	while(j < m) {
		c[k] = b[j];
		k++;
		j++;
	}
	sort(c,c+n+m);
	for(int i = 0; i < n + m; i++)
	    cout << c[i] << " ";
	cout << endl;
}
int main() {
	int t; cin >> t;
	while(t--) {
		int n,m; cin >> n >> m;
		int a[n], b[m], c[n+m];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int j = 0; j < n; j++) cin >> b[j];
		solve(a,b,c,n,m);
	}
	return 0;
}
