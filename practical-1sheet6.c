#include <stdio.h>

void main() {

    int size;

    printf("Enter the size of an array : ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements : \n");

    for(int i = 0; i <= size; i++) {

        scanf("%d",&arr[i]);
    }

    printf("printing even index number : \n");

    for(int i = 0; i <= size; i++) {

        if(i%2==0) {

            printf("%d\n",arr[i]);
        }
    }
}