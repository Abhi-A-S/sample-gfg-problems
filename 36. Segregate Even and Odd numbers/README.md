# Segregate Even and Odd numbers
https://www.geeksforgeeks.org/problems/segregate-even-and-odd-numbers4629/1

## Expected Complexities
Time Complexity: O(n log n)
Auxiliary Space: O(1)

## Company Tags
Paytm, Accolite, Amazon, MakeMyTrip, Linkedin

## Topic Tags
Arrays, Data Structures

## My solution

idea: 
- using two pointers and selective sorting

way to solve:
- first we divide the array into two parts, even part and odd part
- to do this, initialize 2 pointers i and j
- i will be used to point to even number, j will be for odd
- i = 0, j = len(arr) - 1
- while i <= j do the following
- if arr[i] is odd, swap it and arr[j] and decrement j
- if arr[i] is even, increment i
- repeat until while is false
- this way, poiter 'i' will split the array into 2 parts
- apply sorting on each of the parts