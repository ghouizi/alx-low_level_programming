#include <stdio.h>

int main()
{
	int a[] = {42, 23, 98, 17, 61};
	int *p = a;

	// Your code should be written on this line, before the ;
	printf("a[2] = %d\n", *(p+2));

	return 0;
}
