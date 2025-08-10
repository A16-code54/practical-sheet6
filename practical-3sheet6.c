#include <stdio.h>

void main() {

    int size;

    printf("Enter the size of an array : ");
    scanf("%d",&size);

    printf("Enter the elements : \n");

    int arr[size];

    for(int i = 0; i < size; i++) {

        scanf("%d",&arr[i]);
    }

    for(int i = 0; i <= size; i++) {

        if(arr[i]%2 == 0) {

            printf("output : %d\n",arr[i]);
        }
    }

    
}