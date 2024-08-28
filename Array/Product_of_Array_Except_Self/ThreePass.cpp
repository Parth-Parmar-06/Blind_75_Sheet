#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        vector<int> prefixMul(n);
        vector<int> postfixMul(n);
        prefixMul[0] = 1;
        postfixMul[n-1] = 1;
        for (int i=1; i<n; i++) {
            prefixMul[i] = prefixMul[i-1]*nums[i-1];
        }
        for (int i=n-2; i>=0; i--) {
            postfixMul[i] = postfixMul[i+1]*nums[i+1];
        }
        for (int i=0; i<n; i++) {
            ans[i] = prefixMul[i]*postfixMul[i];
        } return ans;
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