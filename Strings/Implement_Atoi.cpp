// Problem: Implement Atoi 
// Platform: GeeksforGeeks
// Approach: Simulation
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
  public:
    int myAtoi(string& s) {
        int result = 0, sign = 1, idx = 0;
        
        while(s[idx] == ' ')
        {
            idx++;
        }
        
        if(s[idx] == '-' || s[idx] == '+')
            if(s[idx++] == '-')
                sign = -1;
        
        while(s[idx] >= '0' && s[idx] <= '9')
        {
            if(result > INT_MAX / 10 || 
            (result == INT_MAX / 10 && s[idx] - '0' > 7))
            {
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            result = result * 10 + (s[idx++] - '0');
        }
        return sign * result;
    }
};