#include<bits/stdc++.h>
using namespace std;
vector<int> a; int n, k;

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		a.resize(n);
		int key = 1;
		for(int i = 0; i < n; i++)
		    cin >> a[i];
		for (int i = 0; i < n; i++){
			if (a[i] == k){
				cout << i+1;
				key = 0;
				break;
			}
		}
		if (key == 1) cout << -1;
		cout << endl;
	}
	return 0;
}
