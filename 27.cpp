#include<bits/stdc++.h>
using namespace std;

void solve() {
	int a, m; cin >> a >> m;
	if(a == 1 && m != 1) cout << "1" << endl;
	else if(m == 1) cout << "-1" << endl;
	else {
		if(a%m == 0) cout << "-1" << endl;
		else {
			int x = -1;
			for(int i = 1; i <= m-1; i++) {
				if(a*i%m == 1) {
					x = i;
					break;
				}
			}
			cout << x << endl;
		}
	}
}
int main() {
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
