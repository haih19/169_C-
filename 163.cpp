#include <bits/stdc++.h> 
using namespace std; 
  
void dem(string s) { 
    int res = 0; 
    for (int i = 0; i < s.length(); i++) {
        for (int j = i; j < s.length(); j++) {
            if (s[i] == s[j]) res++;
        }
    }
    cout << res << endl;
} 
int main() {
	int t; cin >> t;
	while(t--) {
		string s; cin >> s;
		dem(s);
	}
	return 0;
}
