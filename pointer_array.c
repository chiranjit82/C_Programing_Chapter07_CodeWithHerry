#include<stdio.h>

int main(){ 
    int i = 45;
    int *ptr = &i;
    printf("The value of ptr is %u \n", ptr);
    ptr++;
    // ptr++;
    // ptr++;
    // ptr--;
    printf("The value of ptr is %u \n", ptr);

    // char b = 'A';
    // char *ptr = &b;
    // printf("The value of ptr is %u \n", ptr);
    // ptr++;
    // printf("The value of ptr is %u \n", ptr);

    // float c = 90.54;
    // float *ptr = &c;
    // printf("The value of ptr is %u \n", ptr);
    // ptr ++;
    // printf("The value of ptr is %u \n", ptr);
    
    // double c = 90.54;
    // double *ptr = &c;
    // printf("The value of ptr is %u \n", ptr);
    // ptr ++;
    // printf("The value of ptr is %u \n", ptr);

    return 0;
}