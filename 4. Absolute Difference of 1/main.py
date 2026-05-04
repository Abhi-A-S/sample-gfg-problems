class Solution:
    def getDigitDiff1AndLessK(self, arr, k):
        # code here
        size = 0
        
        for i in arr:
            if i < k and i > 9:
                if self.isAdjacent(i):
                    arr[size] = i
                    size += 1
                
        return arr[0:size]
    
    def isAdjacent(self, n):
        flag = True
        
        while flag and n > 9:
            d1 = n % 10
            n = n // 10
            d2 = n % 10
            
            flag = (d1 + 1 == d2) or (d1 - 1 == d2)            
        
        return flag