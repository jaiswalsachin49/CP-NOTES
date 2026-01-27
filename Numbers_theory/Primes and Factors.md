# Primes and Factors

## Factors (Divisors)
A number is called a factor (or divisor) of another number if it divides the other number exactly (without leaving any remainder).

### Notation:
    If a divides b exactly, we write a|b.
    If a does not divide b exactly, we write a∤b.

### Example:
    The factors of 24 is {1,2,3,4,6,8,12,24}
    So, 4|24 (because 24/4 = 6) and 5∤24 (because 24/5 = 4.8 which is not an integer)

## Prime Numbers
A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.

### Example:
    Primes - 2,3,5,7,11,13,17....
    Non-Primes (Composite Numbers) - 4(4 is divisible by 2), 6(6 is divisible by 2 and 3), 8(8 is divisible by 2,4)......

## Prime Factorization
Every integer > 1 can be uniquely represented as a product of prime numbers. This is also called as Fundamental Theorem of Arithmetic.
n = p1^a1 * p2^a2 * p3^a3 * ... * pk^ak

where p1, p2, p3, ..., pk are prime numbers and a1, a2, a3, ..., ak are positive integers.

### Example:
    Prime Factorization of 84 is 2^2 * 3^1 * 7^1

## No. of Factors or No. of Divisors 
The number of divisors of a number n (denoted by d(n)) can be calculated using its prime factorization:
If:
    n = p1^a1 * p2^a2 * p3^a3 * ... * pk^ak
    Then:
    d(n) = (a1 + 1) * (a2 + 1) * (a3 + 1) * ... * (ak + 1)

### Example:
    No. of Divisors of 84 is (2+1)(1+1)(1+1) = 3*2*2 = 12
    Factors of 84 are {1,2,3,4,6,7,12,14,21,28,42,84}

## Sum of Factors
    The sum of all positive divisors of a number n (denoted by σ(n)) can be calculated using its prime factorization:
    If:
        n = p1^a1 * p2^a2 * p3^a3 * ... * pk^ak
        Then:
        σ(n) = (p1^(a1+1) - 1)/(p1 - 1) * (p2^(a2+1) - 1)/(p2 - 1) * ... * (pk^(ak+1) - 1)/(pk - 1)

### Example:
    Sum of Divisors of 84 is (2^(2+1) - 1)/(2 - 1) * (3^(1+1) - 1)/(3 - 1) * (7^(1+1) - 1)/(7 - 1) = 7*4*8 = 224
