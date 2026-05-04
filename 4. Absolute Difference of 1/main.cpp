class Solution 
{
  public:
    vector<int> getDigitDiff1AndLessK(vector<int>& arr, int k) 
    {
        // code here
        int size = 0;
        
        for (int i: arr) 
        {
            if (i < k && i > 9) 
            {
                if (isAdjacent(i)) 
                {
                    arr[size] = i;
                    size++;
                }
            }
        }
        
        arr.resize(size);
        return arr;
    }
    
    bool isAdjacent(int n) 
    {
        bool flag = true;
        
        while (flag && n > 9) 
        {
            int d1 = n % 10;
            n = n / 10;
            int d2 = n % 10;
            
            flag = (d1 + 1 == d2) || (d1 - 1 == d2);
        }
        
        return flag;
    }
};