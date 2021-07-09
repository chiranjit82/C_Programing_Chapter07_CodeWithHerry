// #include<stdio.h>

// int main(){ 
//     int marks[5];
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter the marks %d : ", i+1);
//         scanf("%d", &marks[i]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d \n", marks[i]);
//     }
    
//     return 0;
// }

// Quick quiz 02:
// #include<stdio.h>

// int main(){ 
//     int num[3] = {12, 13, 14};
//     int *ptr = &num[0];
//     printf("The address of the 12 is %u \n", ptr);
//     for (int i = 0; i < 3; i++)
//     {
//         printf("The value of array %d \n", (*ptr+i));
//     }
//     int *pt = &num[2];
//     for (int i = 0; i < 3; i++)
//     {
//         printf("The value of array %d \n", (*pt-i));
//     }
//     int *pt1 = &num[1];
//     int *pt2 = &num[2];
//     int sub = pt2-pt1;
//     printf("The value of subtract is %d \n", sub);
//     if (pt1 == pt2)
//     {
//         printf("\nThe address is same");
//     }
//     else {
//         printf("\nThe address is not same");
//     }
    
//     return 0;
// }

// Qick quiz 03:
// #include<stdio.h>
// void fun (int *ptr, int n);

// int main(){ 
//     int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     for (int j = 0; j < 3; j++)
//     //     {
//     //         printf("%d \t", arr[i][j]);
//     //     }
//     //     printf("\n");
//     // }
//     int *ptr = &arr[0][0];
//     fun(ptr,9);
//     return 0;
// }
// void fun (int *ptr, int n) {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d \t", (*ptr +i));
//     }
    
// }

// Practice Set 01:
// #include<stdio.h>

// int main(){ 
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int *ptr = &arr[0];
//     printf("The 3rd value is : %d", *(ptr + 2));
//     return 0;
// }

// Practice set 02:
// #include<stdio.h>

// int main(){ 
//     int s[3] = {1, 2, 3};
//     // printf("The value of *(s+3) is %d \n", *(s+3));  // Throw an error.
//     printf("The value of *(s+3) is %d \n", *(s+2));
//     return 0;
// }

// Practixce Set 03:
// #include<stdio.h>

// int main(){ 
//     int arr[10];
//     int num =5;
//     for (int i=0; i<10; i++) {
//          arr[i] = num * (i+1);
//         printf("%d X %d = %d \n", num, (i+1), arr[i]);
//     }
//     return 0;
// }

// Practice Set 04:
// #include<stdio.h>

// int main(){ 
//     int arr[10];
//     int num;
//     printf("Enter the number: ");
//     scanf("%d", &num);
//     for (int i = 0; i < 10; i++) 
//     {
//         arr[i] = num * (i+1);
//     }
//     for (int j = 0; j < 10; j++)
//     {
//         printf("%d X %d = %d \n", num, (j+1), arr[j]);
//     }
    
//     return 0;
// }

// Practice Set 05:
// #include<stdio.h>
// void fun (int *arr, int size);

// int main(){ 
//     int arr[4] = {2, 4, 5, 7};
//     printf("Value before function call: ");
//     for (int i=0; i<4; i++) {
//         printf("%d \t", arr[i]);
//     }
//     fun (arr,4);
//     printf("\nValue after function call: ");
//     for (int i=0; i<4; i++) {
//         printf("%d \t", arr[i]);
//     }
//     return 0;
// } 
// void fun (int *arr, int size) {
//     int temp;
//     for (int i = 0; i < (size/2); i++)
//     {
//         temp = *(arr+i);
//         *(arr+i) = *(arr+size-i-1);
//         *(arr+size-i-1) = temp;
//     }
    
// }

// Practice Set 06:
// #include<stdio.h>
// int fun (int *arr, int size);

// int main(){ 
//     int arr[6];
//     printf("Enter the number: ");
//     for (int i = 0; i < 6; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int count = fun (arr,6-1);
//     printf("The number of count is %d .\n", count);
//     return 0;
// }
// int fun (int *arr, int size) {
//     int count = 0;
//     for (int j = 0; j <= size; j++)
//     {
//         if (*(arr+j) > 0)
//         {
//             count ++;
//         }
//     }
//     return count;
// }

// Practice Set 07:
// #include<stdio.h>
// void printTable (int *num, int size, int n);

// int main(){ 
//     int num[3][10];
//     printTable (num[0],10,2);
//     printTable (num[1],10,7);
//     printTable (num[2],10,9);
//     return 0;
// }
// void printTable (int *num, int size, int n) {
//     printf("Multiplication Table of %d \n", n);
//     for (int i = 0; i < size; i++)
//     {
//         num[i] = (i+1)*n;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d X %d = %d \n", n, i+1, num[i]);
//     }    
//     printf("*********************************************************************\n");
// }

// Practice Set 08:
// #include<stdio.h>
// void printTable (int *num, int size, int n);

// int main(){ 
//     int num[3][10];
//     int num1, num2, num3;
//     printf("Enter the number 1: ");
//     scanf("%d", &num1);
//     printf("Enter the number 2: ");
//     scanf("%d", &num2);
//     printf("Enter the number 3: ");
//     scanf("%d", &num3);
//     printTable (num[0],10,num1);
//     printTable (num[1],10,num2);
//     printTable (num[2],10,num3);
//     return 0;
// }
// void printTable (int *num, int size, int n) {
//     printf("Multiplication Table of %d \n", n);
//     for (int i = 0; i < size; i++)
//     {
//         num[i] = (i+1)*n;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d X %d = %d \n", n, i+1, num[i]);
//     }    
//     printf("#####################################################################\n");
// }

// Practice Set 09:
// #include<stdio.h>

// int main(){ 
//     int arr[2][3][4];
//     int * st;
//     st = &arr[0][0][0];
//     for (int i=0; i<24; i++) {
//         printf("Address of the three dimension array are %u \n", (st+i));
//     }
//     return 0;
// }