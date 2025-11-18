# include<stdio.h>
int strStr(char* haystack, char* needle) {
	int broke,i=0,j=0;
	if(needle[0]=='\0')return 0;
    while(haystack[i]!='\0'){
    	int k=i;
    	broke=0;
    	if(haystack[i]==needle[j]){
    		while(needle[j]!='\0'){
    		 if(needle[j]!=haystack[k]){
    		   	 broke=1;
    		   	 j=0;
    		     break;
			 }
    		 j++;
    	     k++;
			}
			if(!broke){
				return i;
			}	
		}
		i++;
	}
	return -1;
}
int main(){
	char haystack[100];
	char needle[100];
	scanf("%s",haystack);
	scanf("%s",needle);
    printf("%d",strStr(haystack,needle));	
}
