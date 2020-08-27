#include<bits/stdc++.h>
using namespace std;

int solve(int a[], int L, int R, int n) {
	int sum = 0;
	for(int i = L-1 ; i < R; i++)
	    sum += a[i];
	return sum;
}
int main() {
	int t; cin >> t;
	while(t--) {
		int n,Q,L,R; cin >> n >> Q;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		while(Q--) {
			cin >> L >> R;
			cout << solve(a,L,R,n) << endl;
		}
	}
	return 0;
}
