#include<iostream>
#define MAX 1000000

using namespace std;

int t, n, k, x, a[MAX];

int binarySearch(int left, int right, int x){
	if(a[right] <= x){
		return right;
	}
	if(a[left] > x){
		return left;
	}
	int mid = (left + right) / 2;
	if(a[mid] <= x && a[mid + 1] > x){
		return mid;
	}
	if(a[mid] < x){
		return binarySearch(mid + 1, right, x);
	}
	return binarySearch(left, mid - 1, x);
}

void solve(){
	int left = binarySearch(0, n - 1, x);
	int right = left + 1;
	int count = 0;
	if(a[left] == x){
		left--;
	}
	while(left >= 0 && right < n && count < k){
		if(x - a[left] <= a[right] - x){
			cout<<a[left]<<" ";
			left--;
		}
		else{
			cout<<a[right]<<" ";
			right++;
		}
		count++;
	}
	while(count < k && left >= 0){
		cout<<a[left]<<" ";
		left--;
		count++;
	}
	while(count < k && right < n){
		cout<<a[right]<<" ";
		right++;
		count++;
	}
}

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i = 0; i < n; i++){
			cin>>a[i];
		}
		cin >> k >> x;
		solve();
		cout<<endl;
	}
	return 0;
}
