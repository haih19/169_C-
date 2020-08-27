#include<bits/stdc++.h>
using namespace std;
 
int n, x[20];
int Bool[20] = { 0 };

void xem() {
    for (int i = 1; i <= n; i++)
        cout << x[i] << "";
    cout << " ";
}
void ql(int i) {
    for (int j = 1; j<= n; j++) {
        if (!Bool[j]) {
            x[i] = j; 
            Bool[j] = 1;
            if (i == n)  xem();
            else         ql(i + 1);
            Bool[j] = 0;
        }
    }
}
int main() {
   int t; cin >> t;
   while(t--) {
   	    cin >> n;
   	    ql(1);
   	    cout << endl;
   }
   return 0;
}
