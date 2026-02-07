/*Write a program to find greatest of three numbers using nested if-else.*/

void main(){
    int num1 = 20,num2 = 50, num3 = 60;
    if(num1 > num2 && num1 > num3){
        printf("%d is greater among the numbers",num1);
    }
    else{
        if(num2 > num3){
            printf("%d is greater among the numbers",num2);
        }
        else{
            printf("%d is greater among the numbers",num3);
        }
    }
}