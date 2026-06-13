#User function Template for python3

class Solution:
    def squaresInMatrix(self, m, n):
        # code here 
        k = min(m, n) - 1
        
        res = int(m * n * (k + 1) - k * (k + 1) / 2 * (m + n) + k * (k + 1) * ( 2 * k + 1) / 6)
        
        return res