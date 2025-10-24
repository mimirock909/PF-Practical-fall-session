#include<stdio.h>
int main(){
	float salary,taxra,tax,salaf;
	 printf("enter your salary = ");
	 scanf("%f",&salary);
	 printf("enter your taxrate = ");
	 scanf("%f",&taxra);
	 tax=salary*(taxra/100);
	 salaf=salary-tax;
	 printf("the tax to pay is = %.2f\n",tax);
	 printf("salary after paying tax = %.2f\n",salaf);
	return 0;
}
