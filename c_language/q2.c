#include <stdio.h>
int main(){
    int num1 = 10;
    int num2 = 2;
    
    char op ;
    printf("enter a operator :");
    scanf("%c",&op);

    switch(op){
        case '+' :
            printf("%d",num1+num2);
            break;
            
        case '-' :
            printf("%d",num1-num2);
            break;
        
        case '*' :
            printf("%d",num1*num2);
            break;
        
        case '%' :
            printf("%d",num1%num2);
            break;
        
        case '/' :
            if(num2!=0) 
                printf("%d",num1/num2);
        
            else 
                printf("Division by zero : error");
                break;
        
        default :
            printf("Invalid operator : error");
        
    }
    return 0;
}
