#include<stdio.h>
int main(){	
/*Teacher asks the student to check whether the input number is divisible by 7 or not.
For checking the divisibility, take the last digit and double it,
take the rest of the digits and subtract the doubled last digit repeat until the result is 7,
-7 or 0. For example: 
10976 -> 1097-12 = 1085 -> 108-10 = 98 -> 9-16 = -7 
49 -> 4 - 18 = 14 -> 1 - 8 = -7*/
   int num ;
   printf("enter number=");
   scanf("%d",&num );
   int steps =0;
   int maxsteps = 20;
   do{
   	 int  lastdigit=num %10;
   	 num = (num /10 )-( lastdigit*2);
   	 steps++;
   	 if (steps==maxsteps){
   	 	break;
		}
   }while(num!=0 && num!=7 && num!=-7);
   if (num==0 || num==7 || num==-7){
   	printf("number is divisible by 7");
   }
   else{
   	printf("number is not divisible by 7");
   }\
   return 0;
}
