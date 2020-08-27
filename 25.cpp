#include<bits/stdc++.h>
using namespace std;

int LCM( int a, int b) {
	return a*b/__gcd(a,b);
}
int lietke(int m, int n, int a, int b) {
	int c = LCM(a,b);
	int aa = n/a - (m-1)/a;
	int bb = n/b - (m-1)/b;
	int cc = n/c - (m-1)/c;
	return aa + bb -cc;
}
int main() {
	int t; cin >> t;
	while(t--) {
		int m,n,a,b; cin >> m >> n >> a >> b;
		cout << lietke(m,n,a,b) << endl;
	}
	return 0;
}
