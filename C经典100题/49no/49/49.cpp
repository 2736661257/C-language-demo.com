#include<stdio.h>
#define max
#define maximum(x,y) (x>y)?x:y
#define minumum(x,y) (x>y)?y:x
void main()
{
	int a = 10, b = 20;
#ifdef max
	printf("\40: the large one is %d\n", maximum(a, b));
#else
	printf("\40: the lower one is %d\n", minimum(a, b));
#endif
#ifdef min
	printf("\40: the lower one is %d\n", minimum(a, b));
#else
	printf("\40: the large one is %d\n", maximum(a, b));
#endif
#undef max
#ifdef max
	printf("\40: the large one is %d\n", maximum(a, b));
#else
	
	printf("\40: the lower one is %d\n", minimum(a, b));
#endif
#define min
#ifndef min
	printf("\40: the lower one is %d\n", minimun(a, b));
#else 
	printf("\40: the larger one is %d\n", maximum(a, b));
#endif

}