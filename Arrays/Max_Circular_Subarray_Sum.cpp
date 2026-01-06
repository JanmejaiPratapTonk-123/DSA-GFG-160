// Problem: Find the maximum circular subarray sum
// Platform: GeeksforGeeks
// Approach: Kadane's Algorithm with modification for circular arrays
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
        int n = arr.size();
        
        int totalSum = 0;
        int curMaxSum = 0, curMinSum = 0;
        int maxSum = arr[0], minSum = arr[0];
        
        for(int i = 0; i < n; i++)
        {
            curMaxSum = max(curMaxSum + arr[i], arr[i]);
            maxSum = max(maxSum, curMaxSum);
            
            curMinSum = min(curMinSum + arr[i], arr[i]);
            minSum = min(minSum, curMinSum);
            
            totalSum += arr[i];
        }
        
        int circularSum = totalSum - minSum;
        
        if(totalSum == minSum)
            return maxSum;
            
        return max(maxSum, circularSum);
    }
};