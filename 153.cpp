#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
	    string s; cin>>s;
	    ll l = s.length(); // l la do dai chuoi
	    ll arr[26] = {0}; // tao 1 mang lua tru tan so chu cai
	    for(int i=0 ; i<l ; i++)
	        arr[s[i]-'0']++; // dem tan so cac chu cai
	    ll maxi=0; // khoi tao bien max tan so bang 0
	    for(int i=0 ; i<26 ; i++)
	        maxi = max(maxi,arr[i]); // tim ra tan so max
	    if(l%2 == 0) { // neu do dai chuoi chan
	        if(maxi <= l/2) cout << "1" << endl; // tan so max < nua chuoi => tao dc day nhu de
	        else cout << "0" << endl;
	    }
	    else { // neu do dai chuoi le
	        if(maxi <= (l/2)+1) cout << "1" << endl; // tan so max < nua chuoi+1 => tao dc day nhu de
	        else cout << "0" << endl;
	    }
    }
	return 0;
}
