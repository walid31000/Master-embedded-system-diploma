/*
 * main8.c
 *simple calculator
 *  Created on: 27 Dec 2023
 *      Author: walid
 */
#include<stdio.h>
int main()
{
	float op1,op2,result;
	char op;
	printf("enter two operands\n");
	fflush(stdout);
	scanf("%f%f",&op1,&op2);
	printf("enter  operator\n");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&op);
	switch(op)
  {
	case '+':result=op1+op2;printf("result=%f",result);break;
	case '-':result=op1-op2;printf("result=%f",result);break;
	case '*':result=op1*op2;printf("result=%f",result);break;
	case '/':if(op2==0)
	{
		printf("error \n");
	}
	else
	{
		result=op1/op2;
		printf("result=%f",result);
	}
	break;
  }
   default:printf("wrong operator\n");break;
}

