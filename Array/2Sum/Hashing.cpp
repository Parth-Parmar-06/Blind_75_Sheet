#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;
        int n = nums.size();
        for (int i=0; i<n; i++) {
            int key = target-nums[i];
            if (mpp.find(key) != mpp.end()) {
                return {mpp[key], i};
            }
            mpp[nums[i]] = i;
        } return {-1, -1};
    }
};
int main() {
    vector<int> arr = {2,6,5,8,11};
    int target = 14;
    Solution obj;
    vector<int> ans = obj.twoSum(arr, target);
    cout << "Ans: [" << ans[0] << "," << ans[1] << "]";
} 