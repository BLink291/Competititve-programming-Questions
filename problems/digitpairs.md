Given N three digit numbers, your task is to find bitscore for all N numbers and then print the number of pairs possible based on these calculated bitscore.

1. Rules to calculate bitscore

    From three digit number,
    extract largest digit and multiply by 11 then,
    extract smallest digit and multiply by 7 then,
    add both the result for getting bit pairs
    Note: Bitscore should be of two digits, if it above result in three digits simply ignore most significant digit.

    Say number is 286,
    largest is 8 and smallest is 2
    so 8*11 + 2*7 = 102, so ignoring 1 bitscore  =02
    Say number is 123
    Largest digit is 3 and smalles is 1 
    so 3*11 + 1*7, so bitsscore = 40

2. Rules for making pairs from above calculated bitscore

    conditions to make bit pair are
    Both bit score should be in either odd a=or even position to be eligible to form pair
    Pairs can be only made if most significant digit are same and at most two pairs can be made for a given ginificant digit.


Constraints
N<=500

INPUT

first line contain N denoting number of three digits number 
second line contain N 3 digit integers delimited by space

OUTPUT

one integer value denaoting number of bit pairs 


[My solution](../solutions/digitpairs.cpp)