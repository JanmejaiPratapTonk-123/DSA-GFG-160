// Problem: Kth Missing Positive Number in a Sorted Array
// Platform: GeeksforGeeks
// Approach: Binary Search
// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        int n = arr.size();
        
        int left = 0;
        int right = n - 1;
        
        while(left <= right)
        {
            int mid = left + (right - left) / 2;
            int missing = arr[mid] - (mid + 1);
            
            if(missing < k)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return left + k;
    }
};