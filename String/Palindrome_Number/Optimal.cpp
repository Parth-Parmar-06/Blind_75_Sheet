#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        int copy_x = x;
        long reversed_x = 0;
        while (x!=0) {
            int quotient = x%10;
            reversed_x = reversed_x*10 + quotient;
            x /= 10;
        }
        if (reversed_x == copy_x) return true;
        else return false;
    }
};
int main() {
    int num = 12221;
    Solution obj;
    string ans = obj.isPalindrome(num)?"Yes" :"No";
    cout << "Is Palindrome?: " << ans;
}