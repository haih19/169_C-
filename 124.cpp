#include<bits/stdc++.h>
using namespace std;

vector<int> res;
int solve(int a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < res.size(); j++){
			if(a[i] == res[j]){
				return a[i];
			}
		}
		res.push_back(a[i]);
	}
	return -1;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n; int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		cout << solve(a,n) << endl;
		res.clear();
	}
	return 0;
}
