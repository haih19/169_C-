#include<bits/stdc++.h>
using namespace std;

bool kiemtra_vuong(int x) {
	int s = sqrt(x);
	return (s*s == x);
}
bool kiemtra_fibo(int n) {
	return (kiemtra_vuong(5*n*n+4) || kiemtra_vuong(5*n*n-4)) ;
}
int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n; int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++) {
			if(kiemtra_fibo(a[i])) cout << a[i] << " ";
		}
	    cout << endl;
	}
	return 0;
}

