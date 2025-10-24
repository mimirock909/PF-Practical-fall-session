#include<stdio.h>
int main(){
	int hours;
    float d1,d2,d3,d4,d5, totalDistance = 0, avgSpeed;
    printf("Enter total hours car traveled (1 to 5): ");
    scanf("%d", &hours);
    printf("Enter distance covered in hour 1 (in miles): " );
    scanf("%f", &d1);
    printf("Enter distance covered in hour 2 (in miles): ");
    scanf("%f", &d2);
    printf("Enter distance covered in hour 3 (in  miles): ");
    scanf("%f", &d3);
    printf("Enter distance covered in hour 4 (in miles): ");
    scanf("%f", &d4);
    printf("Enter distance covered in hour 5 (in miles): ");
    scanf("%f", &d5);
    
    totalDistance = d1+d2+d3+d3+d4+d5;
    
    avgSpeed = totalDistance / hours;        
    
    printf("\nTotal Distance = %.2f miles", totalDistance);
    printf("\nTotal Time = %d hours", hours);
    printf("\nAverage Speed = %.2f miles/hour\n", avgSpeed);
	return 0;
}
