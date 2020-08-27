#include<bits/stdc++.h>
#define ll long long
using namespace std; 
// dung thuat toan kadane
ll max(ll a[], ll n) { 
   ll max_0 = a[0], max_1 = a[0]; 
   for (int i = 1; i < n; i++) { 
      max_1 = max(a[i], max_1 + a[i]);
      max_0 = max(max_0, max_1);
   } 
   return max_0; 
} 
int main() { 
    int t; cin >> t;
    while(t--) {
    	ll n; cin >> n; ll a[n];
    	for(int i=0; i<n; i++)
    	    cin >> a[i];
		cout << max(a, n) << endl;
	}
    return 0; 
}
