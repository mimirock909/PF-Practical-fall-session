#include<stdio.h>
int main(){
	int dept;
	printf("enter your department \n 1.csit\n2.electrical\n3.civil\n:");
	scanf("%d",&dept);
	int subdept;
	switch(dept){
		case 1:
			printf("enter subdepartment\n1.cyber security\n2.data science\n3.gaming and animation\n4.no sub department\n5.artificial intelligence");
			scanf("%d",&subdept);
			switch(subdept){
				case 1:
					printf("your doing computer science with specialization in cyber security");
					break;
		    	case 2:
					printf("your doing computer science with specialization in data science");
					break;
				case 3:
					printf("your doing computer science with specialization in gaming and animation");
					break;
				case 5:
					printf("your doing computer science with specialization in artificial intelligence");
					break;
				case 4:
					printf("your doing computer science without specialization ");
					break;
			}
			break;
	    case 3:
	        printf("you are from civil engeneering department");
	        break;
	    case 2:
	        printf("you are from electrical engeneering department");
	        break;
	    default:
	    	printf("wrong input");
	}	
	return 0;
}
