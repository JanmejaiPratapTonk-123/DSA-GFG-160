// Problem: Given an array of integers and a target sum, 
// determine if there are two numbers in the array that add up to the target sum.
// Platform: GeeksforGeeks
// Approach: Using Hashing to store previously seen numbers and checking for the complement.
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        unordered_map<int, int> mp;
        
        for(int i = 0; i < n; i++)
        {
            int num = target - arr[i];
            
            if(mp.find(num) != mp.end())
                return true;
                
            mp[arr[i]] = i;
        }
        
        return false;
    }
};