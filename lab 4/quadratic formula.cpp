#include<stdio.h>
#include<math.h>
int main(){
	/*. Write a C program to find all roots of a quadratic equation by using the given formula; it is 
required to take user input for a, b and c value*/
   int a , b , c ;
   printf("enter a =");
   scanf("%d",&a);
   printf("enter b =");
   scanf("%d",&b);
   printf("enter c =");
   scanf("%d",&c);
   if (a!=0){
      if(sqrt(b*b-4*a*c)>0){
         float ans1=(-b+sqrt((b*b)-(4*a*c)))/2*a;
         float ans2=(-b-sqrt(b*b-4*a*c))/2*a;
         printf("x=%f and%f",ans1,ans2 );
        }
        else if(sqrt((b*b)-(4*a*c))==0){
        	float ans2=(-b-sqrt(b*b-4*a*c))/2*a;
         printf("x=%f ",ans2 );
		}
		else{
			printf("no real roots, roots are complex conjugate.");
		}
    }
	else{
		printf("roots are infinity.");
	}


	
	
	
	return 0;
}
