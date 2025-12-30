// Problem: Find the Majority Element which occurs more than floor(n/3) times in an array
// Platform: GeeksforGeeks
// Approach: Boyer–Moore Voting Algorithm (Extended for n/3)
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        int n = arr.size();
        int element1 = -1, element2 = -1;
        int count1 = 0, count2 = 0;
        
        for(auto &num : arr)
        {
            if(num == element1)
                count1++;
            else if(num == element2)
                count2++;
            else if(count1 == 0)
            {
                element1 = num;
                count1 = 1;
            }
            else if(count2 == 0)
            {
                element2 = num;
                count2 = 1;
            }
            else
            {
                count1--;
                count2--;
            }
        }
        
        count1 = 0;
        count2 = 0;
        
        for(auto &num : arr)
        {
            if(num == element1)
                count1++;
            else if(num == element2)
                count2++;
        }
        
        vector<int> result;
        
        if(count1 > (n / 3))
            result.push_back(element1);
        if(count2 > (n / 3))
            result.push_back(element2);
            
        if(result.size() == 2)
        {
            if(result[0] > result[1])
                swap(result[0], result[1]);
        }
        return result;
    }
};