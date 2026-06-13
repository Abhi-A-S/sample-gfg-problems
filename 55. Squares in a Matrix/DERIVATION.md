# Derivation
Deriving a formula to solve in $O(1)$ time and space

## Examples
### matrix with m = 2 and n = 2
- we can create 4 -> $1 \times 1$ squares
- and 1 -> $2 \times 2$ square

we can calculate it in the following way

$2 \cdot 2 + 1 \cdot 1 = 4 + 1 = 5$

### matrix with m = 4 and n = 3
the biggest square in this can be $3 \times 3$ which is $min(4, 3)$
- we can create 12 -> $1 \times 1$ squares
- and 6 -> $2 \times 2$ squares
- and 1 -> $3 \times 3$ squares

we can calculate it in the following way

$4 \cdot 3 + 3 \cdot 2 + 2 \cdot 1 = 12 + 6 + 2 = 20$

## Deriving General Solution
let us assume a matrix of $m$ rows and $n$ columns

squares can be at the minimum a $1 \times 1$ and maximum of $k \times k$, where $k = min(m, n) - 1$

Then the number of squares that can be created in this matrix is:

$\sum_{i = 0} ^ k (m - i) (n - i)$

$= \sum_{i = 0} ^ k (m - i) (n - i)$

$= \sum_{i = 0} ^ k [m n - m i - n i + i ^ 2]$

$= \sum_{i = 0} ^ k [m n - i (m + n) + i ^ 2]$

using the following standard formulae for summations:

$\sum_{i = 0}^n 1 = n + 1$

$\sum_{i = 0}^n i = \dfrac{n (n + 1)} {2}$

$\sum_{i = 0}^n i ^ 2 = \dfrac {n (n + 1) (2 n + 1)} {6}$

we can simplify the above into:

$= m n (k + 1) - \dfrac{k (k + 1)} {2} (m + n) + \dfrac{k (k + 1) (2 k + 1)}{6}$