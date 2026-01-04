// Problem: Find the Maximum Subarray Sum using Kadane's Algorithm
// Platform: GeeksforGeeks
// Approach: Kadane's Algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int n = arr.size();
        int result = arr[0];
        int SubArr = arr[0];
        
        for(int i = 1; i < n; i++)
        {
            SubArr = max(arr[i], SubArr + arr[i]);
            result = max(result, SubArr);
        }
        return result;
    }
};