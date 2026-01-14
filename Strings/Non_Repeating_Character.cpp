// Problem: Find the first non-repeating character in a string
// Platform: GeeksforGeeks
// Approach: Frequency Counting
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
  public:
    char nonRepeatingChar(string &s) {
        vector<int> freq(26, 0);
        
        for(auto &ch : s)
            freq[ch - 'a']++;
        
        for(auto &ch : s)
        {
            if(freq[ch - 'a'] == 1)
                return ch;
        }
        
        return '$';
    }
};