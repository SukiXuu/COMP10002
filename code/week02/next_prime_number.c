/*
Determine if an input number is prime.
/
#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[]) {
	int n, try_factor, isprime;
	printf("Enter a number n: ");
	if (scanf("%d", &n) != 1) {
		printf("Incorrect input\n");
		exit(EXIT_FAILURE);
	}
	// a value for n has been read 
	isprime = 1;
	for (try_factor=2; try_factor*try_factor<=n; try_factor++) {
		if (n%try_factor==0) {
			isprime = 0;
			break;
		}
	}
	if (isprime == 1) {
		printf("%d is a prime number\n", n);
	} else {
		printf("%d = %d * %d\n", n, try_factor, n/try_factor);
	}
	return 0;
}

=====================================================================
    Program written by Alistair Moffat, as an example for the book
    "Programming, Problem Solving, and Abstraction with C", Pearson
    Custom Books, Sydney, Australia, 2002; revised edition 2012,
    ISBN 9781486010974.

    See http://people.eng.unimelb.edu.au/ammoffat/ppsaa/ for further
    information.


    Prepared December 2012 for the Revised Edition.
   ================================================================== */
// comment 
#include <stdio.h>
#include <stdlib.h>

int 
main(int argc, char *argv[]){
	int try_factor, num_in,num_out=1;
	printf("Enter an integer value: ");
	scanf("%d", &num_in);
	if (num_in <= 0){
		printf("Must be positive!!!");
		exit(EXIT_FAILURE);
	}
	num_in ++;
	while (num_out == 1){
		for(try_factor=2; try_factor*try_factor<=num_in; try_factor++) {
			if (num_in%try_factor==0) {
				num_in++;
				num_out = 1;
				break;
				}
			num_out = 0;
		}
	}
	printf("The next prime is     : %d\n",num_in);
return 0;
}
/* 思考：
找到一个数的平方小于现在数，设为range_
range_ + 1 的平方
*/