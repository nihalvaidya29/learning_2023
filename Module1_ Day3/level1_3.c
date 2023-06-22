#include <stdio.h>

int main() {
    int num = 5872; // Change the number here
    int largest = num;

    int temp = num;
    int divisor = 1;

    while (temp > 0) {
        temp /= 10;

        for (int i = 0; i < divisor; i++) {
            int deletedDigit = (num / (divisor * 10)) * divisor + (num % divisor);
            if (deletedDigit > largest) {
                largest = deletedDigit;
            }
            divisor *= 10;
        }
    }

    printf("Largest number obtained by deleting a single digit: %d\n", largest);

    return 0;
}
