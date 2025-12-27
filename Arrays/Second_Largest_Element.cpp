// Problem: Second Largest Element
// Platform: GeeksforGeeks
// Approach: Single pass
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int getSecondLargest(vector<int> &arr) 
    {
        int largest = -1, second = -1;

        for (auto x : arr) 
        {
            if(x > largest) 
            {
                second = largest;
                largest = x;
            } 
            else if(x < largest && x > second) 
            {
                second = x;
        }
        return second;
    }
};
