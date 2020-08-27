#include <bits/stdc++.h>
using namespace std;

int a[1005], f[1005], n;
void solve() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		f[i] = 1;
		for(int j = 0; j < i; j++) {
			if(a[i] > a[j] && f[j]+1 > f[i]) f[i] = f[j] + 1;
		}
	}
	sort(f,f+n);
	cout << f[n-1] << endl;
}
int main() {
	int t; cin >> t;
	while(t--)	solve();
	return 0;
}

