#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for (int i:nums) {
            st.insert(i);
        } return st.size()<nums.size();
    }
};
int main() {
    vector<int> arr = {1,2,3,0,4,7,1,8,9};
    Solution obj;
    string ans = obj.containsDuplicate(arr)? "Yes" :"No";
    cout << "Contains Duplicate?: " << ans;
}