#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i=1; i<nums.size(); i++) {
            if (nums[i] == nums[i-1]) return true;
        } return false;
    }
};
int main() {
    vector<int> arr = {1,2,3,0,4,7,1,8,9};
    Solution obj;
    string ans = obj.containsDuplicate(arr)? "Yes" :"No";
    cout << "Contains Duplicate?: " << ans;
}