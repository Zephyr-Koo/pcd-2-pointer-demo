#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 6;
	int b = 2;
	int c = 0;

	int *p;
	int *q;
	int *r;

	p = &b; // (1) Pointer 'p' now points to address of 'b'

	printf("%d %d %d \n", a, b, c); // 6 2 0
	printf("%d \n\n", *p); // 2

	q = p;  // (2) Pointer 'q' now points to same location as pointer 'p'
	r = &c; // (3) Pointer 'r' now points to address of 'c'

	printf("%d %d %d \n", a, b, c); // 6 2 0
	printf("%d %d %d \n\n", *p, *q, *r); // 2 2 0

	p = &a; // (4) Pointer 'p' now points to address of 'a'
	*q = 8; // (5) Store/assign value 8 into where pointer 'q' was directed,
	        //     in this case, 'b'

	printf("%d %d %d \n", a, b, c); // 6 8 0
	printf("%d %d %d \n\n", *p, *q, *r); // 6 8 0

	*r = *p; // (6) Store/assign value from pointer 'p' into where pointer 'r'
	         //     was directed, in this case, 'c'

	printf("%d %d %d \n", a, b, c); // 6 8 6
	printf("%d %d %d \n\n", *p, *q, *r); // 6 8 6

	*r = a + *q + *&c; // (7) Store the sum of value 'a', value from
	                   //     pointer 'q', and value of 'c' into where
	                   //     pointer 'r' was directed, in this case, 'c'

	/*
		- &c indicates address of 'c'
		- *&c is similar to *(&c) which refers to the value from address
		  of 'c', or simply 'c'. Therefore the expression *& is redundant.
	*/

	printf("%d %d %d \n", a, b, c); // 6 8 20
	printf("%d %d %d \n\n", *p, *q, *r); // 6 8 20

	puts("\n");
	system("pause");
	return 0;
}
