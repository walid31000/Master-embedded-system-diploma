/*
 * reverse_word.c
 *description:c function to reverse words in string
 *  Created on: 26 Jan 2024
 *      Author: walid
 */


#include<stdio.h>
void reverse_words(char string[]);
int main()
{
  char name[100];
  printf("enter your name\n");
  fflush(stdout);
  gets(name);
  reverse_words(name);
  printf("your name reverse: %s\n",name);

}
void reverse_words(char string[])
{
	int i=0,j=0,l,k=0,s=0;
	char temp[100];
	while(string[i]!=' ')
	{
		temp[j]=string[i];//copy the first word into temp array
		i++;
		j++;
	}

    temp[j]=' ';
 for(l=i+1;string[l]!='\0';l++,k++)
 {
	 string[k]=string[l];//move the second word at the first place
 }
 string[k++]=' ';//add space between the two words

 for(;string[k]!='\0';k++,s++)
 {
	 string[k]=temp[s];//copy the first word from temp

 }
 string[k]='\0';//end the second word by null
}
