#include<stdio.h>
#include<string.h>
int main(){
/*	Write down a program which asks user to input his first name and last name in a separate array. 
After taking the input your program should be able to concatenate first name and last name and 
return it as full name. Count down number of characters in the full name as well. 
For example: First name: Muhammad, Second name: Ahmed, Full name: Muhammad Ahmed*/
  char first[50];
  char last [50];
  char full [100];
   printf("Enter first name: ");
    scanf("%s",&first);  
    printf("Enter last name: ");
    scanf("%s",&last); 
	strcpy(full, first);     
	strcat(full,' ');
    strcat(full, last);
	printf("\nFull Name: %s\n", full);
	int len=strlen(full);
	printf("Number of characters in full name: %d\n",len);
	
	return 0;
}
