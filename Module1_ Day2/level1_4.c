#include <stdio.h>

int countBitsSet(int num) {
    int count = 0;
    while (num > 0) {
        if (num & 1) {
            count++;
        }
        num >>= 1;
    }
    return count;
}

int main() {
    int arr[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(arr) / sizeof(arr[0]);
    int total = 0;

    for (int i = 0; i < size; i++) {
        total += countBitsSet(arr[i]);
    }

    printf("Total number of set bits: %d\n", total);

    return 0;
}