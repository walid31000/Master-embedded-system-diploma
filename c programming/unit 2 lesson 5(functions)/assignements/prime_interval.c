/*
 * prime_interval.c
 *description:c program to find prime numbers between 2 intervals using function
 *  Created on: 6 Jan 2024
 *      Author: walid
 */
#include<stdio.h>
int check_prime(int num);
int main()
{
	int num1,num2,i;
	printf("enter 2 numbers (intervals)\n");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&num1,&num2);
	printf("prime numbers between %d and %d :",num1,num2);
	for(i=num1;i<=num2;i++)
	{
		if (check_prime(i)==0)
		{
			printf("%d ",i);
		}
	}

}

int check_prime(int num)
{
	int i,flag=0;

	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			flag=1;
			break;
		}
	}

	return flag;



}

