class Solution 
{
  public:
    vector<int> getMoreAndLess(vector<int> &arr, int target) 
    {
        // code here
        if (target < arr[0])
            return {0, arr.size()};
        else if (target > arr.back())
            return {arr.size(), 0};

        int n = arr.size();
        int left = 0;
        int right = n -1; 
        int mid {};
        vector<int> res = {};
        while (left <= right) 
        {
            mid = (left + right) / 2;
            
            if (arr[mid] <= target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        res.push_back(left);
        
        left = 0;
        right = n - 1;
        
        while (left <= right) {
            mid = (left + right) / 2;
            
            if (arr[mid] >= target)
                right = mid - 1;
            else
                left = mid + 1;
        }
                
        res.push_back(n - left);
        
        return res;
    }
};