#include <stdio.h>

void main() {

    int size;

    printf("Enter the size of an array : ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the array element : \n");

    for(int i = 0; i < size; i++) {

        scanf("%d",&arr[i]);
    }

    int product = 1;

    for(int i = 0; i < size; i++) {

        if(arr[i] % 2 == 1) {

            product *= arr[i];

            
        }
    }
    printf("product of odd numbers : %d\n",product);
}