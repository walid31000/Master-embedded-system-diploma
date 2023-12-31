/*
 * insert.c
 *description:C program to insert an element in an array
 *  Created on: 31 Dec 2023
 *      Author: walid
 */


#include<stdio.h>
int main()
{
	int arr[100];
	int num,i,var,loc;
	printf("enter number of elements \n");
	fflush(stdout);fflush(stdin);
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter element to be inserted \n");
	fflush(stdout);fflush(stdin);
	scanf("%d",&var);
	printf("enter  the location \n");
	fflush(stdout);fflush(stdin);
	scanf("%d",&loc);
	//Create space at the specefied location
	for(i=num-1;i>=loc-1;i--)
	{
		arr[i+1]=arr[i];

	}
	arr[loc-1]=var;//insert the element
	//print the array after insertion
	for(i=0;i<=num;i++)
	{
		printf("%d ",arr[i]);
	}

}
