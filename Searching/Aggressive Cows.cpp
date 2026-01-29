// Problem: Aggressive Cows
// Platform: GeeksforGeeks
// Approach: Binary Search
// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
  public:
  
    bool check(vector<int> &stalls, int k, int mid)
    {
        int n = stalls.size();
        int cows = 1;
        int last = stalls[0];
        
        for(int i = 1; i < n; i++)
        {
            if(stalls[i] - last >= mid)
            {
                last = stalls[i];
                cows++;
            }
            if(cows >= k)
                return true;
        }
        return false;
    }
    
    int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(), stalls.end());
        
        int n = stalls.size();
        int left = 1;
        int right = stalls[n - 1] - stalls[0];
        int ans = 0;
        
        while(left<=right)
        {
            int mid = left + (right - left) / 2;
            if(check(stalls, k, mid))
            {
                ans = mid;
                left = mid + 1;
            }
            else
                right = mid - 1;
        }
        return ans;
    }
};