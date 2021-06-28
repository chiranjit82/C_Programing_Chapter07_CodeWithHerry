#include<stdio.h>

int main(){ 
    int i, a[4];
    int *ptr;
    // ptr = &a[0];
    ptr = a;
    for (i = 0; i < 4; i++)
    {
        printf("Enter the value of %d :", i+1);
        scanf("%d", ptr);
        ptr ++;
    }
    
    for (i = 0; i < 4; i++)
    {
        printf("The value of %d is %d  \n", i+1, a[i]);
    }
    
    return 0;
}