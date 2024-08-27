#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxiProfit = 0;
        int miniPrice = prices[0]; 
        for (int i=1; i<prices.size(); i++) {
            miniPrice = min(prices[i], miniPrice);
            maxiProfit = max(prices[i]-miniPrice, maxiProfit);
        } return maxiProfit;
    }
};
int main() {
    vector<int> arr = {7,1,5,3,6,4};
    Solution obj;
    int ans = obj.maxProfit(arr);
    cout << "Ans: " << ans;
}