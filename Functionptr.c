#include<stdio.h>

void Fun()
{
	printf("Inside fun\n");
}

int main()
{
	Fun();
	
	void (*fptr)();
	
	fptr = Fun;
	
	fptr();
	
}
