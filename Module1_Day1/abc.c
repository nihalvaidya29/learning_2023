#include <stdio.h>

int findMaxIfElse(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int findMaxTernaryOperator(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    
    
    int maxIfElse = findMaxIfElse(num1, num2);
    int maxTernaryOperator = findMaxTernaryOperator(num1, num2);
    
    printf("Using if-else: %d\n", maxIfElse);
    printf("Using ternary operator: %d\n", maxTernaryOperator);
    
    return 0;
}
