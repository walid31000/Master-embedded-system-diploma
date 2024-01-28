/*
 * prime_interval.c
 *description:c function to print all prime numbers between two numbers
 *  Created on: 24 Jan 2024
 *      Author: walid
 */


#include<stdio.h>
int prime(int num);
int main()
{
	int num1,num2,i;
	printf("enter two numbers\n");
	fflush(stdout);
	scanf("%d%d",&num1,&num2);
    printf("prime numbers between %d and %d:  ",num1,num2);
    for(i=num1;i<=num2;i++)
    {
    	if(prime(i)==1)
    	{
    		printf("%d ",i);
    	}
    }



}




int prime(int num)
{
	int i,flag=1;
	if(num==0||num==1)
	{
		return 0;
	}
	for (i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			flag=0;
			break;
		}
	}
	return flag;
}
