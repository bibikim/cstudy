#include <stdio.h>
#include <string.h>

int main()
{
	
	if(!0)
	{
		printf("true\n");
	}
	else
	{
		printf("false\n"); 
	}
	
	printf("=================\n"); 
	
	int math = 80;
	int eng = 70;
	
	if(math >= 80 || eng >=90)
	{
		printf("PASS\n");
	}
	else
	{
		printf("FAIL\n");
	}
	
	char msg[] = "kimhanbi";

	if(strcmp(msg, "kimhanbi")==0)  // 0 == 0 => true >> 1 ok
	{
		printf("1 ok\n");
	}
	else
	{
		printf("1 no\n");
	}
	
	if(strcmp(msg, "kimhanbi")==1)  // 0 != 1  -> else => false >> 2 no
	{
		printf("2 ok\n");
	}
	else
	{
		printf("2 no\n");
	}
	
	if(strcmp(msg, "kimhanbi"))  // return 0  -> else => false >> 3 no
	{
		printf("3 ok\n");
	}
	else
	{
		printf("3 no\n");
	}
		
	if(!strcmp(msg, "kimhanbi"))  // return 0 -> false -> !false => true >> 4 ok
	{
		printf("4 ok\n");
	}
	else
	{
		printf("4 no\n");
	}
	
	return 0;	
}
