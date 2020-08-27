#include<bits/stdc++.h>
using namespace std;

void solve() {
	int m,n; cin >> m >> n;
	bool f[n+1];
	memset(f,1,sizeof(f));
	f[0] = f[1] = 0;
	for(int i = 2; i <= n; i++)
	    f[i] = 1;
	for(int i = 2; i <= sqrt(n); i++) {
		if(f[i] == 1) {
			for(int j = 2*i; j <= n; j += i) {
				f[j] = 0;
			}
		}
	} 
	int dem = 0;
	for(int i = m; i <= n; i++) {
		if(f[i]) dem++;
	}
	cout << dem << endl;
}
int main() {
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
