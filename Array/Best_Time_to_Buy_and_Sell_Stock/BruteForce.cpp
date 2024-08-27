#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxiProfit = 0;
        int n = prices.size();        
        for (int i=0; i<n; i++) {
            for (int j=i+1; j<n; j++) {
                maxiProfit = max(prices[j]-prices[i], maxiProfit);
            }
        } return maxiProfit;
    }
};
int main() {
    vector<int> arr = {7,1,5,3,6,4};
    Solution obj;
    int ans = obj.maxProfit(arr);
    cout << "Ans: " << ans;
}