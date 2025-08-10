#include <stdio.h>

void main() {

    int size;

    printf("Enter the size of an array : ");
    scanf("%d",&size);

    char arr[size];

    printf("Enter the elements of an array : \n");

    getchar();

    for(char i = 0; i < size; i++) {

        scanf("%c",&arr[i]);

        getchar();
    }

    printf("printing the vowels with index\n");

    for(char i = 0; i < size; i++) {

        if(arr[i] == 'A' || arr[i] == 'E'|| arr[i] == 'I'|| arr[i] =='O'|| arr[i] =='U'|| arr[i] =='a'|| arr[i] =='e' || arr[i] == 'i' || arr[i] =='o' || arr[i] == 'u') {

        printf(" %c ,%d\n",arr[i],i);
        }
    }
}