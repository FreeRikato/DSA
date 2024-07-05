#include<bits/stdc++.h>
using namespace std;
double areaSwitchCase(int ch, vector<double> a) {
	// Write your code here
	switch(ch){
		case 1: 
		return a[0] * a[0] * 2 * acos(0.0);
		break;
	case 2: 
		return a[0] * a[1];
		break;
		default: cout << "Invalid";
	}
}