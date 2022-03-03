#include <iostream>


// simple calculator
int main() {
    
    
    float x,y;
    char c;
    printf("enter (firstNumber secondNumber function(+-*/))\n");
    scanf("%f %f %c",&x,&y,&c);
    
    switch(c){
        case '+':
        printf("result: %f",x+y);
        break;
        case '-':
        printf("result: %f",x-y);
        break;
        case '*':
        printf("result: %f",x*y);
        break;
        case '/':
        printf("result: %f",x/y);
        break;
        default:
        printf("unknown function");
        
    }
    
    return 0;
}
