// Write a program to print sum of prime numbers in a given range.


void main(){
    printf("Calculate sum of prime numbers in a given range.\n");
    printf("Enter a number : ");
    int num;
    int sum=0;
    scanf("%d",&num);

    for(int i = 2; i<=num; i++){
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
    printf("Sum of prime numbers upto %d : %d",num,sum);
}
