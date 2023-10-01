#include <stdio.h>
#include <string.h>

#define CNT 3
#define LEN_NM 10

struct student
{
	int num;
	char name[LEN_NM];
	char gpa[3];
	
} typedef stu;

int main()
{

	stu st_list[CNT];
	int i;
	
	for(i=0; i<CNT; i++)
	{
		printf("num : ");
		scanf("%d", &st_list[i].num);
		printf("NAME : ");
		scanf("%s", &st_list[i].name);
		printf("GPA : ");
		scanf("%s", &st_list[i].gpa);
	}
	
	for(i=0; i<CNT; i++)
	{
		printf("num: %d | name : %s | gpa : %s\n", st_list[i].num, st_list[i].name, st_list[i].gpa);
	}
	
	return 0;
}
