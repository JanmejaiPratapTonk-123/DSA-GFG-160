// Problem: Find Minimum in a Sorted and Rotated Array
// Platform: GeeksforGeeks
// Approach: Use binary search to find the minimum element.
// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
  public:
    int findMin(vector<int>& arr) 
    {
        int n = arr.size();
        int left = 0;
        int right = n - 1;
        
        while(left < right)
        {
            if(arr[left] < arr[right])
                return arr[left];
                
            int mid = left + (right - left) / 2;
            
            if(arr[mid] > arr[right])
                left = mid + 1;
            else
                right = mid;
        }
        return arr[left];
    }
};