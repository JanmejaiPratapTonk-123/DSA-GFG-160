// Problem: Next Permutation of an Array in Lexicographical Order
// Platform: GeeksforGeeks
// Approach: Find the pivot, swap with the just larger element on the right, and sort the suffix.
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        int n = arr.size();
        int pivot = -1;
        for(int i = n - 2; i >= 0; i--)
        {
            if(arr[i] < arr[i + 1])
            {
                pivot = i;
                break;
            }
        }
        
        if(pivot == -1)
        {
            sort(arr.begin(), arr.end());
            return;
        }
        
        for(int i = n - 1; i > pivot; i--)
        {
            if(arr[pivot] < arr[i])
            {
                swap(arr[pivot], arr[i]);
                break;
            }
        }
        sort(arr.begin() + pivot + 1, arr.end());
    }
};