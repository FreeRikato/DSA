#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    /*
     * @param strs: a list of strings
     * @return: encodes a list of strings to a single string.
     */
    string encode(vector<string> &strs) {
        // write your code here
        cout << "\nEncode Function (";
        for(string str: strs) cout << str << " ";
        cout << ")" << endl;

        string encoded_string = "";

        for(string str: strs){
            encoded_string +=  to_string(str.length()) + "#" + str;
        }
        return encoded_string;
    }

    /*
     * @param str: A string
     * @return: decodes a single string to a list of strings
     */
    vector<string> decode(string &str) {
        // write your code here
        int i = 0;
        while(i != str.length()){            
            if(isdigit(str[i])){
                int j = i;
                
                int length = j - i;
            }
            i++;
        }
        return {};
    }
};

int main() {
    Solution solution;

    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    cin.ignore(); // To ignore the newline character after the number input

    vector<string> strs;
    cout << "Enter the strings:" << endl;
    for (int i = 0; i < n; ++i) {
        string s;
        getline(cin, s);
        strs.push_back(s);
    }

    string encoded = solution.encode(strs);
    cout << "Encoded string: " << encoded << endl;

    vector<string> decoded = solution.decode(encoded);
    cout << "Decoded strings:" << endl;
    for (const string &s : decoded) {
        cout << s << endl;
    }

    return 0;
}
