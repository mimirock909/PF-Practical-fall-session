/*Write a program that asks for the number of calories and fat grams in a food. The program 
should display the percentage of calories that come from fat. If the calories from fat are less 
than 30% of the total calories of the food, it should also display a message indicating that the 
food is low in fat. One gram of fat has 9 calories, so Calories from fat = fat grams * 9. The 
percentage of calories from fat can be calculated as: calories from fat/total calories 
Input validation: Make sure the number of calories and fat grams are not less than 0. Also, the 
number of calories from fat cannot be greater than the total number of calories. If that happens, 
display an error message indicating that either the calories or fat grams were incorrectly entered*/
#include<stdio.h>
int main(){
	float calories, fatgms;
	int PCFF;
	printf("enter the number of calories = ");
	scanf("%f",&calories);
	if(calories>=0) {
	  printf("enter fat grams =");
	  scanf("%f",&fatgms);
	 float fatcal=9*fatgms;
     	if (calories>fatcal){	
    	 PCFF=(fatcal/calories)*100;
        	if(PCFF<=30){
	        	printf("the food is low in fat");
	        	printf("\nthe percentage of fat is : %d",PCFF);
	        }
    	     else{
		    printf("the percentage of fat is : %d",PCFF);
	        }
	    }
	    else if(fatcal>calories){
	    	printf("wrong input for fat grams");
		}
	    else{
		  printf("calories are all fat");
	    }
	}
	else{
		printf("insufficient calories");
	}

	
	
	return 0;
}
