# push_swap

Designed for the 42 Cursus.

0 Leaks.

Will sort 5 numbers in less than 12 operations.

Will sort 100 numbers in about 1050 operations.

Will sort 500 numbers in about 6700 operations.


Nested if-else statements used to complete sorting 3-4 numbers.

For 5 numbers i checked where the index of the minimum int was and moved to the top and pushed to B,

then called sort_4 and pushed back to A.

Radix sort seems to be a common solution for beyond 5 numbers. It will not get you full marks,

Radix sort has been adapted to binary, proving useful, as we only have two bins, not ten.

The numbers that are input must be converted to positive intgers...

So  -5, 2, -6, 0, 1  Becomes 1, 4, 0, 2, 3 


Overall, i completed the project in much less time than anticipated...

And learned alot about malloc(), realloc(), calloc(), and free().

The hardest part of this project was the push_a() and push_b() functions...

Which took some time understanding exactly how to resize an array of integers,

without getting some bogus output, that was hard to track down...

Thanks for looking!
