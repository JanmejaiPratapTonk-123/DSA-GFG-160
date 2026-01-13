// Problem: Check if two strings are anagrams of each other
// Platform: GeeksforGeeks
// Approach: Using Hash Map to count character frequencies
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        
        if(s1.size() != s2.size())
            return false;
        
        vector<int> Anagrams(26, 0);
        
        for(auto &ch : s1)
            Anagrams[ch - 'a']++;

        for(auto &ch : s2)
            Anagrams[ch - 'a']--;
        
        
        for(auto Anagram : Anagrams)
        {
            if(Anagram != 0)
                return false;
        }
        return true;
    }
};