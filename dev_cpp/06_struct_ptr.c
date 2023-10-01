#include <stdio.h>

struct struct_ctx
{
	char name[15];
	char dept[10];
	long number;
} typedef stctx_a;

long main()
{
	stctx_a _ctxt;
	stctx_a *ctxt = &_ctxt;
	
	printf("%p\n", ctxt);
	printf("%p\n", &_ctxt);
	
	strcpy(ctxt->name, "Kimhanbi");
	strcpy(ctxt->dept, "ict");
	       ctxt->number = 291;

	printf("name: %s \n", ctxt->name);
	printf("dept: %s \n", ctxt->dept);
	printf("number: %d \n", ctxt->number);
	
	strcpy((*ctxt).name, "Koogyohwan");
	strcpy((*ctxt).dept, "ict");
           (*ctxt).number = 267;
    
    printf("name: %s \n", (*ctxt).name);
    printf("dept: %s \n", (*ctxt).dept);
    printf("nunmber: %d \n", (*ctxt).number);
    
    
    return 0;
} 
