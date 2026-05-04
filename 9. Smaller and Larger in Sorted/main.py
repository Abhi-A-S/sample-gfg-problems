class Solution:
    def getMoreAndLess(self, arr, target):
        # code here
        if target < arr[0]:
            return [0, len(arr)]
        elif target > arr[-1]:
            return [len(arr), 0]
        
        left = 0
        right = len(arr) - 1
        
        while left <= right:
            mid = (left + right) // 2
            
            if arr[mid] <= target:
                left = mid + 1
            else:
                right = mid - 1
            
        smaller = left
        
        
        left = 0
        right = len(arr) - 1
        
        while left <= right:
            mid = (left + right) // 2
            
            if arr[mid] >= target:
                right = mid - 1
            else:
                left = mid + 1
            
        greater = len(arr) - left
        
        return [smaller, greater]