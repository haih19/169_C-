#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		int a, x, y; cin >> a >> x >> y;
		for(int i = 0; i < __gcd(x,y); i++) 
		    cout << a;
		cout << endl;
	}
	return 0;
}
