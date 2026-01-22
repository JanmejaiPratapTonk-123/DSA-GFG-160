// Problem: Number of Occurrence
// Platform: GeeksforGeeks
// Approach: Binary Search to find first and last occurrence
// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
  public:
  
    int Starting(vector<int>& arr, int target, int n)
    {
        int left = 0;
        int right = n - 1;
        int ans = -1;
        
        while(left <= right)
        {
            int mid = left + (right - left) / 2;
            if(arr[mid] == target)
            {
                ans = mid;
                right = mid - 1;
            }
            else if(arr[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return ans;
    }
    
    int Ending(vector<int>& arr, int target, int n)
    {
        int left = 0;
        int right = n - 1;
        int ans = -1;
        
        while(left <= right)
        {
            int mid = left + (right - left) / 2;
            if(arr[mid] == target)
            {
                ans = mid;
                left = mid + 1;
            }
            else if(arr[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return ans;
    }
  
    int countFreq(vector<int>& arr, int target) {
        int n = arr.size();
        
        int first = Starting(arr, target, n);
        
        if(first == -1)
            return 0;
            
        int last = Ending(arr, target, n);
        
        return last - first + 1;
    }
};
