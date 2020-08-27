#include<bits/stdc++.h>
using namespace std;

void sang() {
	int n; cin >> n;
	bool f[n+1];
	memset(f,1,sizeof(f));
	f[0] = f[1] = 0;
	for(int i = 2; i <= n; i++) f[i] = 1;
	for(int i = 2; i <= sqrt(n); i++) {
		if(f[i] == 1) {
			for(int j = 2*i; j <=n; j += i) {
				f[j] = 0;
			}
		}
	}
	for(int i = 2;i <= sqrt(n); i++) {
		if(f[i]) cout << i*i << " ";
	}
	cout << endl;
}
int main() {
	int t; cin >> t;
	while(t--) sang();
	return 0;
}
