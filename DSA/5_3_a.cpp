#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

bool isValid(string s) {
    stack<char> stack;
    unordered_map<char, char> bracketPairs = {
        {')', '('}, 
        {'}', '{'}, 
        {']', '['}
    };
    
    for (char c : s) {
        if (bracketPairs.count(c)) { 
            if (!stack.empty() && stack.top() == bracketPairs[c]) {
                stack.pop();
            } else {
                return false; 
            }
        } else { 
            stack.push(c);
        }
    }
    return stack.empty();
}

int main() {
    string s;
    cout << "Enter a string of parentheses: ";
    cin >> s;

    if (isValid(s)) {
        cout << "The string is valid." << std::endl;
    } else {
        cout << "The string is not valid." << std::endl;
    }

    return 0;
}
