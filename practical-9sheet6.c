#include <stdio.h>

void main() {

    int size;

    printf("Enter the size of an array : ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements of an array : \n");

    for(int i = 0; i < size; i++) {

        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < size; i++) {

        if( arr[i] % 5 == 0) {

            printf("first element divisible by 5 occur at index : %d\n",i);

            break;
        }
    }
}