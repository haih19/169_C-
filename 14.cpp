#include<bits/stdc++.h>
using namespace std;

bool kiemtra(int n) {
	int dem = 0;
	for(int i = 2; i <= sqrt(n); i++) {
		if(n%i == 0) {
			n /= i;
			dem++;
		}
		if(n%i == 0) return 0;
	}
	if(n != 1) dem ++;
	return dem == 3;
}
int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		cout << kiemtra(n) << endl;
	}
	return 0;
}
