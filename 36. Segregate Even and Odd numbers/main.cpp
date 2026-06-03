class Solution {
  public:
    void segregateEvenOdd(vector<int>& arr) {
        // code here
        int i = 0;
        int j = arr.size() - 1;

        while (i <= j)
            if (arr[i] & 1)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                j--;
            }
            else
                i++;
        
        sort(arr.begin(), arr.begin() + i);
        sort(arr.begin() + i, arr.end());
    }
};