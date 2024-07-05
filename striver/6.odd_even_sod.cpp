#include<iostream>
using namespace std;


bool isOdd(int n){
	return n % 2;
}
int main() {
	// Write your code here
	int n, odd = 0, even = 0;
	cin >> n;
	while(n){
		int rem = n%10;
		if(isOdd(rem)) odd += rem;
		else even += rem;
		n /= 10;
	}
	cout << even << " " << odd;
}
