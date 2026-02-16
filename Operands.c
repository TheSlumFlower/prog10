#include <stdio.h>
int main(){
    int a,b, result;
    char operator;
    printf("Enter operator (+ , - , * , /):");
    scanf("%c" , &operator);
    printf("Enter first operand");
    scanf("%d", &a);
    printf("Enter Second operand");
    scanf("%d", &b);
  
    switch(operator){
        case '+':
        result = a + b;
        printf("Result: %d\\n", result);
        break;
        case '-':
        result = a - b;
        printf("Result: %d\\n", result);
        break;
        case '*':
        result = a * b;
        printf("Result: %d\\n", result);
        break;
        case '/':
        result = a / b;
        printf("Result: %d\\n", result);
        break;
        default: printf("invalid operator.\\n");
        break;
    }
}
