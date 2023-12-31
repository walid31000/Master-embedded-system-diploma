/*
 * search.c
 *description:program to search an element in an array
 *  Created on: 31 Dec 2023
 *      Author: walid
 */

#include<stdio.h>
int main()
{
	int arr[100];

	int num,i,var;
	printf("enter number of elements \n");
	fflush(stdout);fflush(stdin);
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter element to be searched \n");
	fflush(stdout);fflush(stdin);
	//read the element to be searched
	scanf("%d",&var);
	for(i=0;i<num;i++)
	{
		if(arr[i]==var)
		{
			printf("number found at location %d",i+1);break;
		}
	}
	if(i==num)
	{
		printf("element not found");
	}
	return 0;

}
