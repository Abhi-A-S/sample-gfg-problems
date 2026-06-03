#User function Template for python3
class Solution:

    def segregateEvenOdd(self,arr):
        # code here
        i = 0
        j = len(arr) - 1

        while i <= j:
            if arr[i] & 1:
                arr[i], arr[j] = arr[j], arr[i]
                j -= 1
            else:
                i += 1

        arr[:i] = sorted(arr[:i])
        arr[i:] = sorted(arr[i:])