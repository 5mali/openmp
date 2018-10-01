//compile with gcc -fopenmp hello.c -o hello.o
//run with OMP_NUM_THREADS=4 ./hello.o
#include <stdio.h>
int main()
{
	printf("hello\n");
#pragma omp parallel
	printf("world\n");
	return 0;
}

