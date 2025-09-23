#include<stdio.h>
int main (){
	/*An online shopping store is providing discounts on the items due to the Eid.
 If the cost of items is more than 1999 it will give a discount upto 50%. 
If the cost of shopping is 2000 to 4000, a 20% discount will be applied.
 If the cost of shopping is 4001 to 6000, a 30% discount will be applied. 
If it's more than 6000 then 50% discount will be applied to the cost of shopping. 
Print the actual amount, saved amount and the amount after discount.*/
    int prize;
    int dprice;
    int amsaved;
    scanf("%d",&prize);
    if(prize>=2000 && prize<=4000){
    	amsaved=0.2*prize;
		dprice=prize-amsaved;
	}
	else if(prize>=4001 && prize<=6000){
		amsaved=0.3*prize;
		dprice=prize-amsaved;
	}
	else if(prize>6000){
		amsaved=0.5*prize;
		dprice=prize-amsaved;
	}
	else {
		printf("no discount");
	}
	printf("original price= %d \n amount saved =%d \n price after discount = %d",prize,amsaved,dprice);
	
	return 0;
	
}
