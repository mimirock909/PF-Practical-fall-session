#include<stdio.h>
int main(){
    char ex;
    scanf("%c",&ex);
    if(ex>='a'&& ex<='z'){
    	printf("lower case");
	}
	else if(ex>='A'&& ex<='Z'){
		printf("lower case");
	}
	else if(ex>='0'&& ex<='9' ){
		printf("digits");
	}
	else{
		printf("special characters");
	}
	return 0;
}
