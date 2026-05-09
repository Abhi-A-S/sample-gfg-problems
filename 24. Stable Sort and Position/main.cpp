//Back-end complete function template in C++

class Solution {

  public:
    // Function to get the index of an element in a sorted array.
    int getIndexInSortedArray(vector<int>& arr, int k) {
        // Write Code Here
        int res = 0;
        int n = arr.size();
        
        for (int i = 0; i < k; i++)
            if (arr[i] <= arr[k])
                res += 1;
                
        for (int i = k + 1; i < n; i++)
            if (arr[i] < arr[k])
                res += 1;
                
        return res;
    }
};