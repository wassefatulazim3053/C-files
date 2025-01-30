#include <stdio.h>

int main() {
    int a, b,c;
    
    
    printf("Enter 1st numbers : ");
    scanf("%d", &a);
    printf("Enter 2nd numbber : ");
    scanf("%d",&b);
    printf("Choose an operation : \n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d",&c);
    
    switch(c) {
        case 1:
            printf("Result: %d\n", a + b);
            break;
        case 2:
            printf("Result: %d\n", a - b);
            break;
        case 3:
            printf("Result: %d\n", a * b);
            break;
        case 4:
            if (b != 0)
                printf("Result: %.2f\n",(float) a / b);
            else
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    
    return 0;
}