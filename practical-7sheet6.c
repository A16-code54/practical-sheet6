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

    int evensum=0;
    int oddsum=0;

    for(int i = 0; i < size; i++) {

        if(i % 2 == 0) {

            evensum += arr[i];
        }else{

            oddsum += arr[i];
        }
    }

     
    printf("the difference between even index element sum and odd index element sum is %d\n",(evensum-oddsum));
}