#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int size,res=0;

    printf("Enter the size of the array (up to %d): ", MAX_SIZE);
    scanf("%d", &size);

     printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<size; i+=2){
        res = res + arr[i];
    }

    printf("Sum of alternate elements: %d\n", res);

    return 0;
}