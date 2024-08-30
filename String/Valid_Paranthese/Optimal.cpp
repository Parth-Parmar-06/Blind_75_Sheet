#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack;
        for (int i=0; i<s.size(); i++) {
            char current = s.at(i);
            if (current == '(') {
                myStack.push(')');
            } else if (current == '{') {
                myStack.push('}');
            } else if (current == '[') {
                myStack.push(']');
            } else if (myStack.empty() || myStack.top()!=current) {
                return false;
            } else {
                myStack.pop();
            }
        } return myStack.empty();
    }
};
int main() {
    string s = "({{()[]}})[{}[]]{()[]{}}";
    Solution obj;
    string ans = obj.isValid(s)?"Yes" :"No";
    cout << "Is Palindrome?: " << ans;
}