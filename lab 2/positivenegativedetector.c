#include<stdio.h>
int main(){
int num;
printf("enter number : ");
scanf("%d",&num);
   
   (num==0)?printf("neutral!"):
      (num>0)? printf("the number you entered is a positive number!"):
           printf("the number you entered is a negative number!");
 return 0;


}
