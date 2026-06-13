
class Solution {
  public:
    int squaresInMatrix(int m, int n) {
        // code here
        int k = min(m, n) - 1;
        
        int res = m * n * (k + 1) - k * (k + 1) / 2 * (m + n) + k * (k + 1) * (2 * k + 1) / 6;
        
        return res;
    }
};