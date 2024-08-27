#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        int n = nums.size();
        for (int i=0; i<n; i++) {
            mpp[nums[i]]++;
        }
        vector<pair<int, int>> freqVec(mpp.begin(), mpp.end());
        sort(freqVec.begin(), freqVec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        });
        vector<int> ans;
        for (int i=0; i<k; i++) {
            ans.push_back(freqVec[i].first);
        } return ans;
    }
};
void displayVector(vector<int> arr, string title) {
    int n = arr.size();
    cout << title << "[";
    for (int i=0; i<n; i++) {
        cout << arr[i] << ",";
    } cout << "]";
}
int main() {
    vector<int> arr = {1,1,1,2,2,3};
    int k = 2;
    Solution obj;
    vector<int> ans = obj.topKFrequent(arr, k);
    displayVector(ans, "Top Freqent Elements are: ");
    return 0;
}