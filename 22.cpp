#include<bits/stdc++.h>
using namespace std;

void tinh() { 
    int n; cin >> n;
	vector<int> f(n+1, 0);
    f[1] = 1; 
    for (int i = 2; i <= n; i++) { 
        if (f[i] == 0) { 
            f[i] = i; 
            for (int j = 2*i; j <= n; j += i) {
            	if (f[j] == 0) 
                    f[j] = i; 
			} 
                
        } 
    } 
    for (int i = 1; i <= n; i++) 
         cout <<  f[i] << " "; 
    cout << endl;
} 
int main() {
	int t; cin >> t;
	while(t--) 	tinh() ;
	return 0;
}




