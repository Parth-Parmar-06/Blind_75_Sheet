#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2, -1);
        int n = nums.size();
        for (int i=0; i<n; i++) {
            for (int j=i+1; j<n; j++) {
                if (nums[i] + nums[j] == target) {
                    ans[0] = i;
                    ans[1] = j;
                    return ans;
                }
            }
        } return ans;
    }
};
int main() {
    vector<int> arr = {2,6,5,8,11};
    int target = 14;
    Solution obj;
    vector<int> ans = obj.twoSum(arr, target);
    cout << "Ans: [" << ans[0] << "," << ans[1] << "]";
} 