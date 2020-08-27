#include <bits/stdc++.h> 
using namespace std; 
  
int solve(int a[], int n) { 
    bool f[n + 1] = { 0 }; 
    for (int i = 0; i < n; i++) { 
        if (a[i] > 0 && a[i] <= n) 
            f[a[i]] = 1; 
    } 
    for (int i = 1; i <= n; i++) 
        if (!f[i])   return i; 
    return n + 1; 
} 
   
int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n; int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		cout << solve(a,n) << endl;
	}
	return 0;
}
  
