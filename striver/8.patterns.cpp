#include <bits/stdc++.h>
using namespace std;
// * * *
// * * *
// * * *
void nForest(int n) {
	// Write your code here.
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < n; j++){
			cout << "* ";
		}
		cout << endl;
	}
}
// * 
// * *
// * * *
void leftTriangle(int n) {
	// Write your code here.
	for(int i = 0; i < n; i ++){
		for(int j = 0; j <= i; j++){
			cout << "* ";
		}
		cout << endl;
	}
}
// 1
// 1 2 
// 1 2 3
void nTriangle(int n) {
	// Write your code here.
	for(int i = 0; i < n; i ++){
		for(int j = 0; j <= i; j++){
			cout <<  j+1 << " ";
		}
		cout << endl;
	}
}
// 1
// 2 2 
// 3 3 3
void triangle(int n) {
	// Write your code here
	for(int i = 0; i < n; i ++){
		for(int j = 0; j <= i; j++){
			cout <<  i+1 << " ";
		}
		cout << endl;
	}
}
// * * *
// * *
// *
void seeding(int n) {
	// Write your code here
	for(int i = 0; i < n; i ++){
		for(int j =i; j < n; j++){
			cout <<  "* ";
		}
		cout << endl;
	}
}
// 1 2 3
// 1 2
// 1
void nNumberTriangle(int n) {
	// Write your code here
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < n - i; j++){
			cout <<  j+1 << " ";
		}
		cout << endl;
	}
}
//   *
//  ***
// *****
void nStarTriangle(int n) {
	// Write your code here
	for(int i = 0; i < n; i ++){
		for(int j =i+1; j < n; j++){
			cout <<  " ";
		}
        for(int k = 0; k <= i*2; k ++){
            cout << "*";
        }
		cout << endl;
	}
}
// *****
//  ***
//   *
void nStarTriangle(int n) {
	// Write your code here
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < i; j++){
			cout <<  " ";
		}
        for(int k = 1; k < (n-i)*2; k ++){
            cout << "*";
        }
		cout << endl;
	}
}
//   *
//  ***
// *****
// *****
//  ***
//   *
void nStarDiamond(int n) {
    // Write your code here.
    for(int i = 0; i < n; i ++){
        for(int j =i+1; j < n; j++){
			cout <<  " ";
		}
        for(int k = 0; k <= i*2; k ++){
            cout << "*";
        }
		cout << endl;
	}
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < i; j++){
			cout <<  " ";
		}
        for(int k = 1; k < (n-i)*2; k ++){
            cout << "*";
        }
		cout << endl;
	}
}
// *
// **
// ***
// **
// *
void nStarTriangle(int n) {
    // Write your code here.
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            cout << "*";
        }
        cout << endl;
    }
}
// 1
// 0 1
// 1 0 1
// 0 1 0 1
void nBinaryTriangle(int n) {
    // Write your code here.
    int toggle;
    for(int i = 0; i < n; i++){
        if(i%2==0) toggle = 1;
        else toggle = 0;
        for(int j = 0; j <= i; j++){
            cout << toggle << " ";
            toggle = !toggle;
        }
        cout << endl;
    }
}
// 1         1
// 1 2     2 1
// 1 2 3 3 2 1
void numberCrown(int n) {
    // Write your code here.
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << j+1 << " ";
        }
        for(int space = 2*(n - i - 1); space >= 0; space--){
            cout << " ";
        }
        for(int k = i; k >= 0; k--){
            cout << k+1 << " ";
        }
        cout << endl;
    }
}
// 1
// 2 3
// 4 5 6 
// 7 8 9 10
void nNumberTriangle(int n) {
    // Write your code here.
    int counter = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << counter++ << " ";
        }
        cout << endl;
    }
}
// A
// A B
// A B C
void nLetterTriangle(int n) {
    // Write your code here.
    for(int i = 0; i < n; i++){
        char counter = 'A';
        for(int j = 0; j <= i; j++){
            cout << counter++ << " ";
        }
        cout << endl;
    }
}
// A B C D
// A B C
// A B
// A
void nLetterTriangle(int n) {
    // Write your code here.
    for(int i = 0; i < n; i++){
        char counter = 'A';
        for(int j = i; j < n; j++){
            cout << counter++ << " ";
        }
        cout << endl;
    }
}
// A
// B B
// C C C
void alphaRamp(int n) {
    // Write your code here.
    char counter = 'A';
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << counter << " ";
        }
        counter++;
        cout << endl;
    }
}
// C
// C B 
// C B A
void alphaTriangle(int n) {
    // Write your code here.
    cin >> n;
    char c = 65 + n - 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << static_cast<char>(c - j) << " ";
        }
        cout << endl;
    }
}

int main() {
    return 0;
}