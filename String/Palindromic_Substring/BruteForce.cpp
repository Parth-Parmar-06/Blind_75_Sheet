#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;
        bool isPalindrome = true;
        int n = s.size();
        for (int i=0; i<n; i++) {
            for (int j=i; j<n; j++) {
                int start = i;
                int end = j;
                while (start<end) {
                    if (s[start]!=s[end]) {
                        isPalindrome = false;
                        break;
                    } start++;end--;
                }
                if (isPalindrome) {
                    count++;
                } isPalindrome = true;
            }
        } return count;
    }
};
int main() {
    string s = "abbcaacc";
    Solution obj;
    int ans = obj.countSubstrings(s);
    cout << "Possible Contigious Palindromic Substrings are: " << ans;
}