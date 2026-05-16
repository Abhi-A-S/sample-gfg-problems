#User function Template for python3
class Solution:
    def totalFine(self, date, car, fine):
        #Code here
        total_fine = 0
        
        for i in range(len(car)):
            if (car[i] + date) & 1:
                total_fine += fine[i]
        
        return total_fine