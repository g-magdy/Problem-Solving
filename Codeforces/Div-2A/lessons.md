# Maths

## really big numbers
using strings to store them instead of a long long

## calculating a series
if the numbers are large use long long 1 < n < 10^15
detect the pattern

### UVA light - more light
I don't need to go one by one - I don't need to calculate the number of divisors
I only need to know if the number of divisors is odd or even

8 (4 factors) - even number of factors
1 8
2 4

9 (3 factors) - odd number of factors because one of them is repeated
1 9
3 3

//cout << "SQRT of " << numbers[i] << " is " << s << endl;
//cout << "calc = " << abs(numbers[i] - s * s) << endl;
if (s - int(s) == 0) // has a square root -> odd number of divisors

### ad-hock
It is better no to mimic the exact behaviour explained in the problem
But to try and understand the pattern and reach the end goal faster.