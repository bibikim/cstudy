#include <stdio.h>
#include <string.h>


struct person
{
	char name[15];
	char addr[30];
	long age;
}typedef ps;

int main() 
{
	ps _ps;
	ps *ps1 = &_ps;
	ps *ps2 = &_ps;
	
	printf("%p\n", ps1);
	printf("%p\n", ps2);
	printf("%p\n", &_ps);
    
	printf("%p\n", *ps1);
	printf("%p\n", _ps);
	
	strcpy(ps1->name, "smith");
	strcpy(ps1->addr, "america newyork");
	       ps1->age = 33;
		   
    printf("%s \n", ps1->name);
    printf("%s \n", ps1->addr); 
    printf("%d", ps1->age); 
    
}
