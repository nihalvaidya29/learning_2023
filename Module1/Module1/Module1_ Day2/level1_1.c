#include <stdio.h>

void printExponent(double x) {
    // Interpret x as a byte array
    unsigned char* bytes = (unsigned char*)&x;

    // Extract the exponent bits
    unsigned char exponentByte = bytes[7] & 0b01111111;

    // Convert the exponent to hexadecimal and binary formats
    char hexString[3];
    sprintf(hexString, "%02X", exponentByte);
    
    char binaryString[9];
    int i;
    for (i = 0; i < 8; i++) {
        binaryString[i] = ((exponentByte >> (7 - i)) & 1) ? '1' : '0';
    }
    binaryString[8] = '\0';

    printf("Exponent in hexadecimal: 0x%s\n", hexString);
    printf("Exponent in binary: 0b%s\n", binaryString);
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}