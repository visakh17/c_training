/*
 ============================================================================
 Name        : calculator.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
typedef unsigned int uint32_t;
void add (uint32_t value1,uint32_t value2)
{
	uint32_t Result=0;
	printf("value1=%d\tvalue2=%d\tResult=%d",value1,value2,Result=(value1+value2));
}
int main(void) {

	uint32_t a=159,b=41;
	add (a,b);
	return EXIT_SUCCESS;
}
