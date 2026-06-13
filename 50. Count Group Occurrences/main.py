class Solution:
    def getCount (self, s, k):
        # code here
        res = 0
        group_counts = [0] * 26
        last_char = None
        
        for i in s:
            if i==last_char:
                continue
            
            else:
                group_counts[ord(i) - 97] += 1
                last_char = i
        
        for i in range(26):
            if group_counts[i] == k:
                res += 1
        
        return res