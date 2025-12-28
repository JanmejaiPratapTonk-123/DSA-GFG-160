// Problem: Reverse an Array
// Platform: GeeksforGeeks
// Approach: Two Pointer (Single Pass)
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int n = arr.size();
        int i = 0, j = n - 1;
        for(i = 0; i < n / 2; i++)
        {
            swap(arr[i],arr[j--]);
        }
    }
};