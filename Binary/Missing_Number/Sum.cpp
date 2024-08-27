#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int sum2 = n*(n+1)/2;
        for (int i: nums) sum+=i;
        return sum2-sum;
    }
};
int main() {
    Solution sol;

    // Test case 1: Missing number is 2
    vector<int> test1 = {0, 1, 3};
    cout << "Test Case 1: " << (sol.missingNumber(test1) == 2 ? "Passed" : "Failed") << endl;

    // Test case 2: Missing number is 0
    vector<int> test2 = {1, 2, 3};
    cout << "Test Case 2: " << (sol.missingNumber(test2) == 0 ? "Passed" : "Failed") << endl;

    // Test case 3: Missing number is 4
    vector<int> test3 = {0, 1, 2, 3};
    cout << "Test Case 3: " << (sol.missingNumber(test3) == 4 ? "Passed" : "Failed") << endl;

    // Test case 4: Empty list
    vector<int> test4 = {};
    cout << "Test Case 4: " << (sol.missingNumber(test4) == 0 ? "Passed" : "Failed") << endl;

    // Test case 5: List with one number (1), so missing number is 0
    vector<int> test5 = {1};
    cout << "Test Case 5: " << (sol.missingNumber(test5) == 0 ? "Passed" : "Failed") << endl;

    // Test case 6: List with one number (0), so missing number is 1
    vector<int> test6 = {0};
    cout << "Test Case 6: " << (sol.missingNumber(test6) == 1 ? "Passed" : "Failed") << endl;

    // Test case 7: List with all numbers except the last one (5), so missing number is 5
    vector<int> test7 = {0, 1, 2, 3, 4};
    cout << "Test Case 7: " << (sol.missingNumber(test7) == 5 ? "Passed" : "Failed") << endl;

    return 0;
}