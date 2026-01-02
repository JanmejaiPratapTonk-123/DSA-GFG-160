// Problem: Best Time to Buy and Sell Stock
// Platform: GeeksforGeeks
// Approach: Greedy
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
  public:
    int maximumProfit(vector<int> &prices) 
    {
        int n = prices.size();
        int profit = 0;
        for(int i = 1; i < n; i++)
        {
            if(prices[i] > prices[i - 1])
            profit += (prices[i] - prices[i - 1]);
        }
        return profit;
    }
};