#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1);
        int prefix = 1, postfix = 1;
        for (int i = 0; i < n; i++) {
            result[i] *= prefix;      
            prefix *= nums[i];       
            result[n-1-i] *= postfix; 
            postfix *= nums[n-1-i];   
        } return result;
    }
};
int main() {
    vector<int> arr = {1,2,3,4};
    Solution obj;
    vector<int> ans = obj.productExceptSelf(arr);
    cout << "Product of Array Except Self: [ ";
    for (int i:ans) {
        cout << i << " ";
    } cout << "]";
}