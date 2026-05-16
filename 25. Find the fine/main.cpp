// User function Template for C++
class Solution 
{
  public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) 
    {
        // code here
        long long int total_fine = 0;
        long long int n = car.size();
        
        for (long long int i = 0; i < n; i++)
            if ((car[i] + date) & 1)
                total_fine += fine[i];
        
        return total_fine;
    }
};