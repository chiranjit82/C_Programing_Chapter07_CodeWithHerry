#include<stdio.h>
void ArrayPrint(int *ptr, int n);

int main(){ 
    int marks[] = {12, 34, 54, 43, 98, 67, 47, 76};
    ArrayPrint(marks, 7);
    return 0;
}
void ArrayPrint(int *ptr, int n){
    int i;
    for (i = 0; i < n; i++)
    {
        printf("The value of %d is %d  \n", i+1, *(ptr+i));
    }
    
}