 #include<stdio.h>
 #include<string.h>
void enter(char name[][20], char dept[][20],char email[][30],int rollno[], long long num[], float gpa[],int *total);
void modify(char name[][20], char dept[][20], char email[][30], int rollno[], long long num[], float gpa[], int *total);
void search(char name[][20], char dept[][20], char email[][30], int rollno[], long long num[], float gpa[], int *total);
void delet(char name[][20], char dept[][20], char email[][30], int rollno[], long long num[], float gpa[], int *total);
int main (){
	int a;
    char name[200][20];
    char dept[200][20];
    int rollno[200];
    char email[200][30];
    long long  num[200];
    float gpa[200];
    int total=0;
    int i;
	while(1){
		
		printf("|| --Student Management System--||\n");
		printf("press 1 for entering a new record. \npress 2 for viewing the student record.\npress 3 for modifying existing record.\npress 4 for searching a specific record.\npress 5 to delete the record.\n press 6 to exit the program.");
		scanf("\n%d",&a);
		switch(a){
	    	case 1:
			 enter(name,dept,email,rollno,num,gpa,&total);
	       	 break;
	    	case 2:
			    if(total == 0) { 
                    printf("\nNo records to display.\n");
                } else {
				for(i=0;i<total;i++){
			 	 printf("student %d\n",i+1);	
	 			 printf(" name: %s\n",name[i]);
		         printf(" department  :%s\n",dept[i]);
		     	 printf(" roll number : %d\n",rollno[i]);
		     	 printf(" GPA : %.2f\n",gpa[i]);
		     	 printf(" email address : %s\n",email[i]);
		     	 printf(" phone number : %lld\n",num[i]);	
				}
			   }
			 
		     break;
			case 3:	
			modify(name, dept, email, rollno, num, gpa,&total);
	 		break;
	    	case 4:
		    search(name,dept,email,rollno,num,gpa,&total);
	    	 break;  
			case 5:
		     delet(name,dept,email,rollno,num,gpa,&total);
		     break;	
		   default:
			if(a==6){
			printf("Program ended .....");
			return 0;
		   }else{
				printf("\nInvalid choice! Try again.\n");
			}
			
	    }
		
    }  } 
 void enter(char name[][20], char dept[][20],char email[][30],int rollno[], long long num[], float gpa[],int *total){
	    int b;
	    int ent;
		printf("if you want to enter a single record press 1 else press any other number. ");
		scanf("%d",&b);
		if (b==1){
			printf(" name : ");
			scanf("%s",name[*total]);
			printf(" department : ");
			scanf("%s",dept[*total]);
			printf(" roll number : ");
			scanf("%d",&rollno[*total]);
			printf(" GPA : ");
			scanf("%f",&gpa[*total]);
			printf(" email address : ");
			scanf("%s",email[*total]);
			printf(" phone number : ");
			scanf("%lld",&num[*total]);
			*total++;
		}
		else{
			printf("enter the number of enteries: ");
			scanf("%d",&ent);
			int i;
			for ( i=0;i<ent;i++){
		 	printf("record %d :\n",i+1);	
		 	printf(" name : ");
		  	scanf("%s",&name[*total]);
		 	printf(" department : ");
		  	scanf("%s",&dept[*total]);
		 	printf(" roll number : ");
		  	scanf("%d",&rollno[*total]);
		 	printf(" GPA : ");
		 	scanf("%f",&gpa[*total]);
		 	printf(" email address : ");
		 	scanf("%s",&email[*total]);
		 	printf(" phone number : ");
		 	scanf("%lld",&num[*total]);	
			 (*total)++;	
			}
		}
		printf("data has been succesfully added.\n");		
	} 	 
void search(char name[][20], char dept[][20], char email[][30],int rollno[], long long num[], float gpa[], int *total) {

    int r, i, found = 0;

    printf("Enter the roll number of the student you want to search: ");
    scanf("%d", &r);

    for (i = 0; i <*total; i++) {
        if (rollno[i] == r) {
            found = 1;
            printf("\n? Record Found:\n");
            
            printf("Name: %s\n", name[i]);
           
		    printf("Department: %s\n", dept[i]);
            printf("Roll Number: %d\n", rollno[i]);
            printf("GPA: %f\n", gpa[i]);
            printf("Email: %s\n", email[i]);
            printf("Phone Number: %lld\n", num[i]);
            break;
        }
    }

    if (!found) {
        printf("\n? Record not found!\n");
    }
}
void modify(char name[][20], char dept[][20], char email[][30],int rollno[], long long num[], float gpa[], int *total) {

    int r, i, found = 0;
    printf("Enter the roll number of the student you want to modify: ");
    scanf("%d", &r);

    for (i = 0; i < *total; i++) {
        if (rollno[i] == r) {  
            found = 1;
            printf("\n?? Record found! Enter new details below:\n");

            printf("New name: ");
            scanf("%s", name[i]);

            printf("New department: ");
            scanf("%s", dept[i]);

            printf("New GPA: ");
            scanf("%f", &gpa[i]);

            printf("New email: ");
            scanf("%s", email[i]);

            printf("New phone number: ");
            scanf("%lld", &num[i]);

            printf("\n? Record updated successfully!\n");
            break;
        }
    }

    if (!found) {
        printf("\n? no record found \n");
    }
}
void delet(char name[][20], char dept[][20], char email[][30], int rollno[], long long num[], float gpa[], int *total) {
    int choice, r, i, j, found = 0;

    printf("to delete the record of specific student press 1.\n");
    printf("to delete ALL records press 2.\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the roll number of the student you want to delete: ");
        scanf("%d", &r);

        for (i = 0; i < *total; i++) {
            if (rollno[i] == r) {
                found = 1;

                for (j = i; j < *total - 1; j++) {
                    strcpy(name[j], name[j + 1]);
                    strcpy(dept[j], dept[j + 1]);
                    strcpy(email[j], email[j + 1]);
                    rollno[j] = rollno[j + 1];
                    num[j] = num[j + 1];
                    gpa[j] = gpa[j + 1];
                }

                (*total)--;
                printf("\n? Record deleted successfully!\n");
                break;
            }
        }

        if (!found) {
            printf("\n? No record found with that roll number.\n");
        }
    }

    else if (choice == 2) {
        int confirm;
        printf("\n?? Are you sure you want to delete ALL records? (press 1 for yes, else press 2): ");
        scanf(" %d", &confirm);

        if (confirm == 1) {
            *total = 0;
            printf("\n? All records have been deleted successfully!\n");
        } else {
            printf("\nOperation cancelled.\n");
        }
    }

    else {
        printf("\nInvalid choice!\n");
    }
}

