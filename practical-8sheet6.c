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

    int prod = 1;

    for(int i = 0; i < size; i++) {

        if(i % 2 == 1) {

            prod *= arr[i];
        }
    }

    printf("The product of the odd indexed element of an array : %d\n",prod);
}