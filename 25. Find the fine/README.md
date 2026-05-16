# Find the fine
https://www.geeksforgeeks.org/problems/find-the-fine4353/1

## Expected Complexities
Time Complexity: O(n)
Auxiliary Space: O(1)

## Company Tags
Microsoft

## Topic Tags
Arrays, Mathematical, Data Structures, Algorithms

## My solution

idea: 
- if date is odd, then we take even cars => odd + even = odd
- if date is even, then we take odd cars => even + odd = odd
- therefore for the cars we choose on that date,  date + cars[i] = odd

way to solve:
- initialize a variable to hold the total fine
- iterate over the cars array
- check if (cars[i] + date) is odd
- if it is odd, add the fine at that index to the total fine