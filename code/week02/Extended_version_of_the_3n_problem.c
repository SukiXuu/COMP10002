/*Extended_version_of_the_3n_problem
Extend the program in Figure 4.9 on page 54 of the textbook so that a value nmax is read, and each number between one and nmax is used as the seed to start the 3n+1 computation. Report the length of the longest cycle generated, and the seed that started that cycle. For example, when nmax is set to 50, the longest sequence is the one that starts at 27. It is the first one to take more than 100 cycles, and it passes through the value 9,232 before converging. The first cycle of length greater than 200 starts at 2,463 before converging. The first cycle of length greater than 200 starts at 2,463 and is of length 208; it grows as large as 250,504 before diminishing back to one.
3n问题的扩展版本
扩展教科书第54页上的图4.9中的程序，以便读取值nmax，并且将介于1和nmax之间的每个数字用作启动3n + 1计算的种子。报告生成的最长周期的长度，以及开始该周期的种子。例如，当nmax设置为50时，最长的序列是从27开始的序列。它是第一个花费100个以上周期的序列，并且在收敛之前经过值9,232。长度大于200的第一个周期在收敛之前从2,463开始。长度大于200的第一个循环从2,463开始，长度为208；它会增长到250,504，然后递减为1。
*/
#include <stdio.h>
#include <stdlib.h>

#define PERLINE 8

int
main(int argc, char *argv[]) {

	int n, cycles, max;
	
	printf("Enter starting value for n: ");
	if (scanf("%d", &n) != 1) {
		printf("Incorrect input\n");
		exit(EXIT_FAILURE);
	}
	/* a value for n has been read */
	max = n;
	cycles = 0;
	while (n>1) {
		printf("%5d ", n);
		if (n%2==0) {
			n = n/2;
		} else {
			n = 3*n+1;
		}
		if (n>max) {
			max = n;
		}
		cycles += 1;
		if (cycles%PERLINE == 0) {
			printf("\n");
		}
	}
	printf("\n%d cycles consumed, maximum was %d\n",
			cycles, max);
	return 0;
}





/*
=====================================================================
    Program written by Alistair Moffat, as an example for the book
    "Programming, Problem Solving, and Abstraction with C", Pearson
    Custom Books, Sydney, Australia, 2002; revised edition 2012,
    ISBN 9781486010974.

    See http://people.eng.unimelb.edu.au/ammoffat/ppsaa/ for further
    information.

    Prepared December 2012 for the Revised Edition.
   ================================================================== */