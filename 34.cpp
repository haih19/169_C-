#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod = 1e9+7;

ll c[1001][1001];
void solve() {
	ll n,k; cin >> n >> k;
	for(int i = 0;i <= 1000; i++) {
        for(int j = 0; j <= i;j++) {
            if(j == 0 || j == i) c[i][j] = 1;
            else c[i][j] = (c[i-1][j]+ c[i-1][j-1])%mod;
        }
    }
    cout << c[n][k] << endl;
}
int main() {
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
