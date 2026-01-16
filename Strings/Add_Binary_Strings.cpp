// Problem: Add Binary Strings
// Platform: GeeksforGeeks
// Approach: Simulate binary addition from the least significant bit to the most significant bit
// Time Complexity: O(n)
// Space Complexity: O(1) 

class Solution {
  public:
  
    string TrimZero(const string& s)
    {
        auto pos = s.find('1');
        return (pos == string::npos) ? "0" : s.substr(pos);
    }
  
    string addBinary(string& s1, string& s2) {
        
        s1 = TrimZero(s1);
        s2 = TrimZero(s2);
        
        int n1 = s1.size();
        int n2 = s2.size();
        
        if(n1 < n2)
        {
            swap(s1, s2);
            swap(n1, n2);
        }
        
        string result = "";
        int j = n2 - 1;
        int carry = 0;
        
        for(int i = n1 - 1; i >= 0; i--)
        {
            int bit1 = s1[i] - '0';
            int bitsum = bit1 + carry;
            
            if(j >= 0)
            {
                int bit2 = s2[j] - '0';
                j--;
                bitsum += bit2;
            }
            
            int sum = bitsum % 2;
            carry = bitsum / 2;
            result.push_back(sum + '0');
        }
        
        if(carry)
            result.push_back('1');
            
        reverse(begin(result), end(result));
        
        return result;
    }
};