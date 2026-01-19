// Problem: Sort an array of 0s, 1s and 2s
// Platform: GeeksforGeeks
// Approach: Dutch National Flag Algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
  public:
    void sort012(vector<int>& arr) {
        int n = arr.size();
        
        int left = 0;
        int right = n - 1;
        
        int mid = 0;
        
        for(int i = 0; i < n; i++)
        {
            if(arr[mid] == 0)
                swap(arr[mid++], arr[left++]);
            else if(arr[mid] == 1)
                mid++;
            else
                swap(arr[mid], arr[right--]);
        }
    }
};