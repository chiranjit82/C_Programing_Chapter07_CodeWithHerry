#include<stdio.h>

int main(){ 
    int marks[4];
    int i;
    for(i=0; i<4; i++){
        printf("Enter the marks of the student %d : ", i+1);
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < 4; i++)
    {
        printf("The marks  of students %d is %d \n", i+1, marks[i]);
    }
    
    return 0;
}