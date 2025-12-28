// Problem: Rotate an array to the left by d times
// Platform: GeeksforGeeks
// Approach: Using Reversal Algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d %= n;
        reverse(arr.begin(), arr.begin() + d);
        reverse(arr.begin() + d, arr.end());
        reverse(arr.begin(), arr.end());
    }
};