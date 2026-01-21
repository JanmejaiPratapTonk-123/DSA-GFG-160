// Problem: Find the H-Index
// Platform: GeeksforGeeks
// Approach: Sorting and Counting
// Time Complexity: O(n log n)
// Space Complexity: O(1)

class Solution {
  public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        
        sort(begin(citations), end(citations), greater<int>());
        
        int i = 0;
        
        while(i < n && citations[i] > i)
        {
            i++;
        }
        return i;
    }
};