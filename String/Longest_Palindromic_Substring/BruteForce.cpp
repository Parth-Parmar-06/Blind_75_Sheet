#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        string longestSub = "";
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
                    string currSub = "";
                    if (j-i+1 > longestSub.size()) {
                        longestSub = "";
                        for (int k=i; k<=j; k++) {
                            longestSub+=s[k];
                        }
                    }
                    
                } isPalindrome = true;
            }
        } return longestSub;
    }
};
int main() {
    string s = "bbaadaccacjdaldilllaalllidkahkd";
    Solution obj;
    string ans = obj.longestPalindrome(s);
    cout << "Longest Contigious Palindromic Substring is: " << ans;
}