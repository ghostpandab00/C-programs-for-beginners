/*
 ============================================================================
 Name        : function_with_argument_with_returnvalue.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum(int,int);
int main(void) {
	int a,b,res;
	printf("Enter two numbers :");
	scanf("%d%d", &a,&b);
	res=sum(a,b);
	printf("Sum is :%d", res);
	return EXIT_SUCCESS;
}
int sum(int num1,int num2){
	int result;
result=num1+num2;
return result;
}
