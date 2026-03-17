# Bit Manipulation

## How Computers "See" Numbers (Base 2)
We count in Base 10(Decimal) beacuse we have 10 fingers.
Each position in number represents a power of 10 (1s,10s,100s)

Computers count in Base 2(Binary) beacuse they have only 2 states (0 which is OFF and 1 which is ON).

Each position in binary number represents a power of 2 (1s,2s,4s,8s)

### Example:
    Lets take the number 13 in decimal.
    13 is made of 8 + 4 + 0 + 1
    In powers of 2: 13 = (1 * 2^3) + (1 * 2^2) + (0 * 2^1) + (1 * 2^0)
    So, in binary 13 is written as 1101
    

### In standard CP environment, a standard int is 32 bits long. So, 13 isn't just 1101, it is actually look like 28 zeros followed by 1101
    00000000000000000000000000001101

## Powers of 2
    2^0 = 1
    2^1 = 2
    2^2 = 4
    2^3 = 8
    2^4 = 16
    2^5 = 32
    2^6 = 64
    2^7 = 128
    2^8 = 256
    2^9 = 512
    2^10 = 1024
    

## Numbers Between Powers are Just Addition
    Every number is :
        Sum of powers of 2 + remainder
    Example: 19
        Nearest Power is 16 -> 10000
        Remaining is 3
        Nearest Power of 3 is 2 -> 10
        Remaining is 1
        Nearest Power of 1 is 1 -> 1
        10000 + 10 + 1 = 10011

## The Sign Bit & Two's Complement
    How the negative numbers are stored in memory?
    The leftmost bit is called the sign bit.
    If the sign bit is 0, the number is positive.
    If the sign bit is 1, the number is negative.
    
    Computer use two's complement to store negative numbers.
    To get the negative version of a number, we invert all the bits and add 1.
    Example: 13 is 00000000000000000000000000001101
    -13 is 11111111111111111111111111110010

    Why this matters in CP? 
    This explains why the maximum positive 32-bit integer is 2^31 - 1 = 2147483647. If you add 1 to this, it will overflow and become a negative number.
