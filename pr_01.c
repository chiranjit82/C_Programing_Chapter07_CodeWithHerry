#include<stdio.h>

int main(){ 
    int arr[10];
    int *ptr;
    ptr = arr;
    ptr = ptr + 2;
    if(ptr == &arr[2]){
        printf("The pointer point the same location in memory. \n");
    }
    else{
        printf("The pointer is not point the same location in memory.\n");
    }
    return 0;
}