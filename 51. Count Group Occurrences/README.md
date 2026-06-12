# Count Group Occurrences
https://www.geeksforgeeks.org/problems/count-the-characters1821/1

## Expected Complexities
Time Complexity: O(n)
Auxiliary Space: O(1)

## Company Tags
Zoho, Amazon

## Topic Tags
Hash, Strings, Data Structures

## My solution

idea: 
- using frequency counting technique

way to solve:
- create a hash, to store the group counts
- iterate over the string
- check if the current character is the same as the previous character
- if it is, then it is treated as a part of the same group
- if it is not, then it is treated at a different group and increment the group count
- make the character as the last character and go to iteration
- reapeat until the string is traversed
- iterate over the hash and count the number of groups with k occurances