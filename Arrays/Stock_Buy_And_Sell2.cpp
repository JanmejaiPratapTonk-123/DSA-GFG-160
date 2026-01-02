// Problem: Best Time to Buy and Sell Stock
// Platform: GeeksforGeeks
// Approach: Single Pass (Tracking Minimum Price)
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int n = prices.size();
        int MinPrice = prices[0];
        int profit = 0;
        for(int i = 1; i < n; i++)
        {
            MinPrice = min(MinPrice, prices[i]);
            profit = max(profit, prices[i] - MinPrice);
        }
        return profit;
    }
};