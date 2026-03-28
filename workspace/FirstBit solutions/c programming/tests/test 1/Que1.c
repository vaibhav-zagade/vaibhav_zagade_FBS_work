// Write a program to print sum of prime numbers in a given range.


void main(){
    printf("Calculate sum of prime numbers in a given range.\n");
    printf("Enter a starting number : ");
    int num1,num2;
    int sum=0;
    scanf("%d",&num1);
    printf("Enter a ending number : ");
    scanf("%d",&num2);

    for(int i = num1; i<=num2; i++){
        int flag = 1;
        for(int j = 2; j<=i/2; j++){
            if(i%j==0){
                flag = 0;
                break;
            }
        }
        if(flag){
            sum = sum + i;
        }
    }
    printf("Sum of prime numbers in range %d to %d : %d",num1,num2,sum);
}
