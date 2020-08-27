#include<bits/stdc++.h>
using namespace std;
int sum(int n) {
	int sum = 0;
	while(n > 0) {
		sum += n%10;
		n /= 10;
	}
	return sum;
}
int checknt(int n) {
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++) {
		if(n%i == 0) return 0;
	}
	return 1;
}
int sumprime(int n) {
	int tong = 0;
	for(int i = 2; i <= sqrt(n); i++) {
		if(n%i == 0) {
			while(n%i == 0) {
				tong += sum(i);
				n /= i;
			}
		}
	}
	if(n > 1) tong += sum(n);
	return tong;
}
void checksmith(int n) {
	if(!checknt(n)) {
		if(sumprime(n) == sum(n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	else cout << "NO" << endl;
}
int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		checksmith(n);
	}
	return 0;
}
