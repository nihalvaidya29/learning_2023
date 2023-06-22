#include <stdio.h>

void printBits(unsigned int num) {
    unsigned int mask = 1 << 31;  // Start with the leftmost bit

    for (int i = 0; i < 32; i++) {
        unsigned int bit = (num & mask) ? 1 : 0;  // Check if the bit is set

        printf("%u", bit);

        // Shift the mask one bit to the right
        mask >>= 1;

        // Print a space after every 8 bits for better readability
        if ((i + 1) % 8 == 0) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    unsigned int num;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Bits: ");
    printBits(num);

    return 0;
}
