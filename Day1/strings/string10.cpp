#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> getAllSubstrings(const string& s) {
    vector<string> result;
    int n = s.length();
    for (int len = 1; len <= n; ++len) {
        for (int i = 0; i <= n - len; ++i) {
            result.push_back(s.substr(i, len));
            
        }
    }
    return result;
}

int main() {
    string input; // "abc"
    cin >> input;
    vector<string> substrings = getAllSubstrings(input);
    for (size_t i = 0; i < substrings.size(); ++i) {
        cout << substrings[i];
        if (i != substrings.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl; // Outputs "a, b, c, ab, bc, abc"
    return 0;
}