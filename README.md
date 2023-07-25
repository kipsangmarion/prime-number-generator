# Prime Number Generator using Eratosthenes Sieve

## Description

This C program implements the famous Sieve of Eratosthenes algorithm to generate prime numbers up to a certain limit. The Sieve of Eratosthenes is an efficient method to find all prime numbers within a specified range.

## How the Program Works

The program will prompt the user to input a positive integer, which will serve as the upper limit for prime number generation. It will then apply the Sieve of Eratosthenes algorithm to find all prime numbers up to and including this limit.

The algorithm works as follows:
1. Create a boolean array of size (limit + 1) to store the primality of numbers from 0 to the limit.
2. Initialize all elements of the array to `true`.
3. Starting from 2 (the first prime number), iterate through the array. For each prime number found, mark its multiples as `false` in the array, as they are not prime numbers.
4. After the iteration, all remaining elements marked as `true` in the array are prime numbers.

## Getting Started

### Prerequisites

To run this program, you need a C compiler installed on your system. If you don't have one, you can install GCC (GNU Compiler Collection), which is freely available and widely used.

### Compiling the Program

To compile the C program, use the following command in the terminal:

```bash
gcc -o prime_generator prime_generator.c
```

### Running the Program

After compiling, run the executable with the following command:

```bash
./prime_generator
```

## Usage

1. Upon running the program, you will be prompted to enter a positive integer that will act as the upper limit for prime number generation.

2. Enter the desired limit and press Enter.

3. The program will then generate and display all the prime numbers up to the specified limit.

4. The output will be a list of prime numbers printed on the console.

## Example

Let's say you run the program and input the limit as 20.

**Input:**
```
Enter the limit for prime number generation: 20
```

**Output:**
```
Prime numbers up to 20 are:
2 3 5 7 11 13 17 19
```

## Contributing

If you find any bugs, issues, or have suggestions for improvement, please feel free to contribute! You can fork the repository, make your changes, and create a pull request.

