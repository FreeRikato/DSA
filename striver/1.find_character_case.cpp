#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char input;
	cin >> input;
	if(isupper(input)) cout << "1";
	else if(islower(input)) cout << "0";
	else cout << "-1";
}
