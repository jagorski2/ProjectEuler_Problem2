#include <stdio.h>

int main()
{
	int first = 1;
	int second = 2;
	int fibnum = 0;
	int evensum = 2;
	while (fibnum < 4000000) {
		fibnum = fib(first,second);
		first = second;
		second = fibnum;
		if (fibnum % 2 == 0){
			evensum += fibnum;
		}
	}
	printf("Sum of the even Fibonacci numbers less than 4 million: %d\n", evensum);
	return 0;
}

int fib (int a, int b){
	return a + b;
}