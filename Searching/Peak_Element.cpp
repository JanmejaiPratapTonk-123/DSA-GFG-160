// Problem: Find Peak Element
// Platform: GeeksforGeeks
// Approach: Binary Search
// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
  public:
    int peakElement(vector<int> &arr) {
        int n = arr.size();
        
        int left = 0;
        int right = n - 1;

        if(n == 1)
            return 0;
        
        while(left <= right)
        {
            int mid = left + (right - left) / 2;
            
            if(mid == 0)
            {
                if(arr[mid] > arr[mid + 1])
                    return mid;
                else
                    left = mid + 1;
            }
            
            if(mid == n - 1)
            {
                if(arr[mid] > arr[mid - 1])
                    return mid;
                else
                    right = mid - 1;
            }
            
            if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
                return mid;
            else if(arr[mid] < arr[mid - 1])
                right = mid - 1;
            else 
                left = mid + 1;
        }
    }
};