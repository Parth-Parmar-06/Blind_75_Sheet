#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for (int i=0; i<nums.size(); i++) {
            for (int j=i+1; j<nums.size(); j++) {
                if (nums[i] == nums[j]) return true;
            }
        } return false;
    }
};
int main() {
    vector<int> arr = {1,2,3,0,4,7,1,8,9};
    Solution obj;
    string ans = obj.containsDuplicate(arr)? "Yes" :"No";
    cout << "Contains Duplicate?: " << ans;
}