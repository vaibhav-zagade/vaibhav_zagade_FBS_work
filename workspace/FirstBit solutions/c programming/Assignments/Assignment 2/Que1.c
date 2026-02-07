/*Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
desired operations.*/

void main(){
    int num1 = 98,num2 = 50;
    char op = '/';
    if(op=='+'){
        printf("%d + %d = %d",num1,num2,num1+num2);
    }
    else if(op=='-'){
        printf("%d - %d = %d",num1,num2,num1-num2);
    }
    else if(op=='*'){
        printf("%d * %d = %d",num1,num2,num1*num2);
    }
    else if(op=='/'){
        printf("%d / %d = %.2f",num1,num2,(float)num1/num2);
    }
    else if(op=='%'){
        printf("%d  %% %d = %d",num1,num2,num1%num2);
    }
    else{
        printf("Invalid operator");
    }
}