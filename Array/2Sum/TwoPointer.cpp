#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string twoSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums.size()-1;
        while (left<right) {
            int sum = nums[left] + nums[right];
            if (sum == target) {
                return "Yes"; // cannot return indices as sorted shuffles them, if required store them in map/vector<pair>
            } else if (sum > target) {
                right--;
            } else {
                left++;
            }
        } return "No";
    }
};
int main() {
    vector<int> arr = {2,6,5,8,11};
    int target = 9;
    Solution obj;
    cout << "Ans: " << obj.twoSum(arr, target);
} 