#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sem,rolls1,rolls2,rolls3,repeat=1;
    while(repeat==1){
    printf("Welcome to CGPA Displayer\n");
    printf("Write the Semester of which you want to see CGPA\n1:1st Semester\n2:2nd Semester\n3:3rd Semester\n");
    scanf("%d",&sem);
    switch(sem){
    case 1: printf("You selected 1st Semester\n");
            printf("Write the Roll No. of the Student to see his/her CGPA\n1:Nikhil\n2:Yash\n3:Rashmi\n");
            scanf("%d",&rolls1);
            switch(rolls1){
            case 1: printf("Nikhil\nCGPA:8.3\n");
            break;
            case 2: printf("Yash\nCGPA:8.5\n");
            break;
            case 3: printf("Rashmi\nCGPA:9.0\n");
            break;
            }
    break;
    case 2: printf("You selected 2nd Semester\n");
            printf("Write the Roll No. of the Student to see his/her CGPA\n1:Vaibhav\n2:Gaurav\n3:Prabhnoor\n");
            scanf("%d",&rolls2);
            switch(rolls2){
            case 1: printf("Vaibhav\nCGPA:8.7\n");
            break;
            case 2: printf("Gaurav\nCGPA:8.1\n");
            break;
            case 3: printf("Prabhnoor\nCGPA:9.3\n");
            break;
            }
    break;
    case 3: printf("You selected 3rd Semester\n");
            printf("Write the Roll No. of the Student to see his/her CGPA\n1:Shivam\n2:Sahil\n3:Nupur\n");
            scanf("%d",&rolls3);
            switch(rolls3){
            case 1: printf("Shivam\nCGPA:8.8\n");
            break;
            case 2: printf("Sahil\nCGPA:8.0\n");
            break;
            case 3: printf("Nupur\nCGPA:8.6\n");
            break;
            }
    break;
    }
    printf("Choose an option whether you want to end or see another Student's CGPA\n1:Continue\n2:End\n");
    scanf("%d",&repeat);
    }
return 0;
}
