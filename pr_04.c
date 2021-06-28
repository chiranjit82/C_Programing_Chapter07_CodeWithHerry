#include<stdio.h>

int main(){ 
    int mul[10];
    int i, n;
    printf("Enter the Multiplication Table number: ");
    scanf("%d", &n);
    for(i=0; i<10; i++){
        mul[i] = n * (i+1);
    }
    for(i = 0; i<10; i++){
        printf("%d X %d = %d \n", n, i+1, mul[i]);
    }
    return 0;
}