/**
 * file: prime_generator.c
 * author: mrion
 * description: c code to generate prime numbers upto a certain limit
*/
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

void primeGen(int limit)
{
	bool isPrime[limit + 1];
	int i, j;
	
	// initialize array elements to true
	memset(isPrime, true, sizeof(isPrime));
	
	// set 0 and 1 to not be prime
	isPrime[0] = isPrime[1] =false;
	
	// apply Eratosthenes sieve
	// starting from 2 to square root of the limit
	for (i=2; i <= sqrt(limit); i++){
		if (isPrime[i]){
			// if i is prime all its multiples are marked as not prime
			// starting from i^2 upto multiples less than or equal to limit
			for (j= i * i; j <= limit; j += i){
				isPrime[j] = false;
			}
		}
	}
	
	printf("Prime numbers upto %d:\n", limit);
	for (i=2; i <= limit; i++){
		if (isPrime[i]){
			printf("%d ", i);
		}
	}
	printf("\n");
}

int main()
{
	int limit;
	printf("Enter a limit for the generator: ");
	scanf("%d", &limit);
	
	if (limit < 2){
		printf("There are no prime numbers upto %d.\n", limit);
		return 0;
	}
	
	primeGen(limit);
	return 0;
}


