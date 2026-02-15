// Write a menu driven program to take a number for user and perform operations as follows.

// Press 1.To check number is even or odd.
// 2.To check number is prime or not.
// 3.To check number is pallindrome or not.
// 4.To check number is positive, negative or zero.
// 5.To reverse a number.
// 6.To find sum of digits.


void main(){
    int n,choice;
    printf("Menu - \n");
    printf("1.To check number is even or odd.\n");
    printf("2.To check number is prime or not.\n");
    printf("3.To check number is pallindrome or not.\n");
    printf("4.To check number is positive, negative or zero.\n");
    printf("5.To reverse a number.\n");
    printf("6.To find sum of digits.\n\n");
    printf("Enter a choice from 1 to 6 : ");
    scanf("%d",&choice);
    

    if(choice <=0 || choice >=7){
        printf("!!!Invalid input!!!");
    }
    else{
        printf("Enter a number : ");
        scanf("%d",&n);
        if(choice == 1){
            if(n%2 == 0){
                printf("%d is even",n);
            }
            else{
                printf("%d is odd",n);
            }
        }
        else if(choice == 2){
            int isprime = 1;
            if(n <= 1){
                printf("%d is not prime",n);
            }
            else{
                for(int i = 2; i < n;i++){
                    if(n%i == 0){
                       isprime = 0;
                    }
                }
                if(isprime == 1){
                    printf("%d is prime number",n);
                }
                else{
                    printf("%d is not a prime number",n);
                }
            }
        }
        else if(choice == 3){
            int rem,rev = 0;
            int num = n;
            while(num > 0){
                rem = num % 10;
                rev = rev * 10 + rem;
                num = num / 10;
            }
            if(n == rev){
                printf("%d is palindrome number",n);
            }
            else{
                printf("%d is not a palindrome",n);
            }
        }
        else if(choice == 4){
            if(n > 0){
                printf("%d is positive number",n);
            }
            else if(n < 0){
                printf("%d is negative number",n);
            }
            else{
                printf("number is zero");
            }
        }
        else if(choice == 5){
            int rem,rev = 0;
            int num = n;
            while(num > 0){
                rem = num % 10;
                rev = rev * 10 + rem;
                num = num / 10;
            }
            printf("reverse number of %d is %d",n,rev);
        }
        else{
            int sum = 0;
            while(n > 0){
                sum = sum + n % 10;
                n = n / 10;
            }
            printf("sum of digits in a number %d",sum);
        }
    }
}
