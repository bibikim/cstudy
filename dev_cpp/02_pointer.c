#include <stdio.h>

#define LEN_NATION 10


long main () 
{
	//  
	char *argv = "param";
	char nation[] = "america";
	char nation2[LEN_NATION +1] = "south korea";

	printf("%s\n", argv);
	printf("%s\n", nation);
	printf("%s\n", nation2);
	
	int num;
	
	printf("%d\n", num);
	printf("%p\n", &num);
	
	num = 10;
	
	printf("%d\n", num);
	
	int *pnum;
	
	pnum = &num;
	
	printf("%d\n", num);
	printf("%p\n", &num);
	printf("%p\n", pnum);
	printf("%d\n", *pnum);
	
	/*
		int num = 10;
		int *pnum = &num      num의주소를가리키는포인터pnum
	*/
	
	int a;
	int *p;
	a = 2;
	
	p = &a;
	
	printf("%p\n", &a);
	printf("%p\n", p);
	printf("%d\n", *p);
	
	
	int hanbi;
	int *home;
	hanbi = 117;
	home = &hanbi;
	
	printf("Hanbi's HOME : %d\n", *home);
	
	int sumin = 202;
	home = &sumin;
	printf("Sumin's HOME : %d\n", *home);
	
	printf("%d", sizeof(char*));
	
	return 0;
	
}


