#include<stdio.h>
#include<string.h>
int main(){
	char fnam[30],lnam[30];
	printf("enter first name : ");
	scanf("%s",fnam);
	printf("enter last name :");
	scanf("%s",lnam);
	char full[61];
	strcpy(full,fnam);
	strcat(full," ");
	strcat(full,lnam);
	printf("full name : %s\n",full);
	
	int len=strlen(full),i,j,temp;
	for(i=0,j=len-1; i<j;i++,j--){
	   temp=full[i];
	   full[i]=full[j];
	   full[j]=temp;
	}
	printf("reversed string : %s\n",full);
	return 0;
}
