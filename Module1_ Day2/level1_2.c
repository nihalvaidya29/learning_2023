#include <stdio.h>

void swap(void* a, void* b, size_t size) {
    unsigned char* p = (unsigned char*)a;
    unsigned char* q = (unsigned char*)b;

    while (size--) {
        unsigned char temp = *p;
        *p++ = *q;
        *q++ = temp;
    }
}

int main() {
    int num1 = 10;
    int num2 = 20;
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2, sizeof(num1));
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    float f1 = 3.14;
    float f2 = 2.71;
    printf("Before swap: f1 = %f, f2 = %f\n", f1, f2);
    swap(&f1, &f2, sizeof(f1));
    printf("After swap: f1 = %f, f2 = %f\n", f1, f2);

    char c1 = 'A';
    char c2 = 'B';
    printf("Before swap: c1 = %c, c2 = %c\n", c1, c2);
    swap(&c1, &c2, sizeof(c1));
    printf("After swap: c1 = %c, c2 = %c\n", c1, c2);

    return 0;
}