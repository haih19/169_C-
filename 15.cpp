#include<bits/stdc++.h>
using namespace std;

int tinh(int n, int p) {
	int x = 0;
	while(n > 0) {
		n /= p;
		x += n;
	}
	return x;
}
int main() {
	int t; cin >> t;
	while(t--) {
		int n, p; cin >> n >> p;
		cout << tinh(n,p) << endl;
	}
	return 0;
}
