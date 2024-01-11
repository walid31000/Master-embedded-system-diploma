/*
 * last_occurence.c
 *description:c function to return the index of last occurrence of a number in a given array
 *if the item is not in the list return -1
 *  Created on: 11 Jan 2024
 *      Author: walid
 */
#include<stdio.h>
int occurrence(int arr[],int size,int num);
int main()
{
	int array[100];
	int s,i,number;
	printf("enter the size of your array \n");
	fflush(stdout);
	scanf("%d",&s);
   /*read element from user*/
	for(i=0;i<s;i++)
	{
		printf("enter element %d:  ",i+1);
		fflush(stdout);
		scanf("%d",&array[i]);
	}
	printf("enter a number to search for \n");
	fflush(stdout);
	scanf("%d",&number);
	int result= occurrence(array,s,number);
	if(result==-1)
	{
		printf("element not found ");
	}
	else
	{
		printf("last occurrence : %d",result);
	}
}
int occurrence(int arr[],int size,int num)
{
	int i;
	/*loop to search for the element num */
	for(i=size-1;i>=0;i--)
	{
		if(arr[i]==num)
		{
			return i+1;
		}
	}
	return -1;//return -1 in case element not found
}
