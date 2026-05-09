class Solution:
    # Function to get the index of an element in a sorted array
    def getIndexInSortedArray(self, arr, k):
        #Write Code Here
        res = 0
        
        for i in range(k):
            if arr[i] <= arr[k]:
                res += 1
                
        for i in range(k+1, len(arr)):
            if arr[i] < arr[k]:
                res += 1
                
        return res