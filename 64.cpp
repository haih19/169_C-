#include<bits/stdc++.h>
#define MAX 1001
using namespace std;

int t, k, n, a[MAX][MAX];
vector<int> res;

int main(){
	cin >> t;
	while(t--){
		cin >> k >> n;
		for(int i = 0; i < k; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
				res.push_back(a[i][j]);
			}
		}
		sort(res.begin(), res.end());
		for(int i = 0; i < res.size(); i++){
			cout << res[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
