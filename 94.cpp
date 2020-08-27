#include<bits/stdc++.h>
using namespace std;

void solve(int a[], int n) {
	sort(a,a+n);
	int i = 0, j = n-1;
	while(i <= j) {
		if(i == j)  cout << a[j] << " ";
		else cout << a[j] << " " << a[i] << " ";
		j--;
		i++;
	}
	cout << endl;
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
