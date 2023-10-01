#include <stdio.h>

int main()
{
	
	int *numPt1;
	int **numPt2;
	int num = 17;
	
	numPt1 = &num;
	numPt2 = &numPt1;
	
	printf("%d\n", **numPt2);
	printf("%p\n", *numPt2);

	printf("%p\n", numPt1);
	printf("%d\n", *numPt1);
	printf("%p\n", &num);
	printf("***************************************\n");
	printf("%p\n", &numPt1);
	printf("%p\n", numPt2);
	
	printf("***************************************\n");
	printf("num: %d == **numPt2: %d \n", num, **numPt2);
	
		
	return 0;
}
