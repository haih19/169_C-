#include<bits/stdc++.h>
using namespace std;

int dem(int n) {
	int ans = 1;
	if(n == 1) return 1;
	if(n%2 != 0) ans++;
	for(int i = 3; i <= sqrt(n); i += 2) {
		if(n%i == 0) ans++;
	}
	return ans;
}
int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		cout << dem(n) << endl;
	}
	return 0;
}
