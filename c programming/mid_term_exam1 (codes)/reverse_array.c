/*
 * reverse_array.c
 *description:c function to take an array and revers its elements
 *  Created on: 26 Jan 2024
 *      Author: walid
 */


#include <stdio.h>
void reverse_array(int arr[],int size);
int main()
{
	int a[100];
	int size,i;
	printf("enter a size of your array \n");
	fflush(stdout);
	scanf("%d",&size);
	fflush(stdout);fflush(stdin);
	printf("enter your array elements \n");
	fflush(stdout);fflush(stdin);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	reverse_array(a,size);
	printf("array after reverse  \n");
	for(i=0;i<size;i++)
	{
		printf("%d  ",a[i]);
	}

}
void reverse_array(int arr[],int size)
{
	int i,temp,j;
	for(i=0,j=size-1;i<size/2;i++,j--)
	{

		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
     }
}
