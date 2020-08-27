#include<bits/stdc++.h>
using namespace std;
int n, x[20];
void xem() {
	for(int i = 1; i <= n; i++) {
		cout << x[i] << "" ;
	}
	cout << " ";
}
void ql(int i) {
	for(int j = 0; j <= 1; j++) {
		x[i] = j;
		if(i == n) xem();
		else ql(i+1);
	} 
}
int main() {
	int t; cin >> t;
	while(t--) {
	    cin >> n;
		ql(1);
		cout << endl;
	}
	return 0;
}
