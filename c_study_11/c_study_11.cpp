#include <stdio.h>
#include <string.h>

int main()
{
	char s1[10] = "batch";
	char s2[7] = "batch";


	int result = strcmp(s1, s2);

	printf("%d\n", result);  // result = 0

	int result2 = !strcmp(s1, s2);

	printf("%d\n", result2);

	return 0;

}
