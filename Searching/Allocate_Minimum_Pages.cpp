// Problem: Allocate Minimum Number of Pages
// Platform: GeeksforGeeks
// Approach: Binary Search
// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
  public:
  
    bool check(vector<int>& arr, int k, int mid, int n)
    {
        int count = 1;
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            if(sum + arr[i] <= mid)
                sum += arr[i];
            else
            {
                count++;
                if(count > k || arr[i] > mid)
                    return false;
                sum = arr[i];
            }
        }
        return true;
    }
  
    int findPages(vector<int> &arr, int k) {
        int n = arr.size();
        if(n < k)
            return -1;
        
        int Totalsum = 0;
        for(auto &num : arr)
            Totalsum += num;
        
        int left = *min_element(begin(arr), end(arr));
        int right = Totalsum;
        
        int ans = -1;
        
        while(left <= right)
        {
            int mid = left + (right - left) / 2;
            if(check(arr, k, mid, n))
            {
                ans = mid;
                right = mid - 1;
            }
            else
                left = mid + 1;
        }
        return ans;
    }
};