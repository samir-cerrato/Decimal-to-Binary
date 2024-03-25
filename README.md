# Decimal-to-Binary-
 A program to convert from decimal to binary.

Your program will read
in a non-negative integer entered by a user, and will print out the corresponding unsigned binary
representation. To achieve this, there are multiple different solutions you may choose to implement.
You may assume that the user will enter a non-negative integer (i.e., it does not matter what your
program does if the user enters anything else). Your program should report an error (and also
possibly an incorrect result) if the user enters a non-negative integer that requires more than 16
bits to represent.

Sample:

$ gcc -o hw2a hw2a.c

$ ./hw2a

Enter non-negative decimal integer to convert: 10

Conversion to binary: 0000000000001010

$ ./hw2a

Enter non-negative decimal integer to convert: 32

Conversion to binary: 0000000000100000

$ ./hw2a

Enter non-negative decimal integer to convert: 23564356433

Conversion to binary: 1111111111111111

Error occurred
