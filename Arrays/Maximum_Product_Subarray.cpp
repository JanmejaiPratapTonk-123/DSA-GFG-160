// Problem: Find Maximum Product in a Subarray
// Platform: GeeksforGeeks
// Approach: Two-Pass Algorithm (Left to Right and Right to Left)
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        int n = arr.size();
        
        int MaxProduct = INT_MIN;
        
        int LeftToRight = 1;
        int RightToLeft = 1;
        
        for(int i = 0; i < n; i++)
        {
            if(LeftToRight == 0)
                LeftToRight = 1;
            if(RightToLeft == 0)
                RightToLeft = 1;
            
            LeftToRight *= arr[i];
            RightToLeft *= arr[n - 1 - i];
            MaxProduct = max({MaxProduct, LeftToRight, RightToLeft});
        }
        return MaxProduct;
    }
};