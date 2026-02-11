// Check the given number is prime or not.
// Input: n = 7
// Output: Prime

void main(){
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    if(num <= 1){
        printf("%d is not prime",num);
    }
    else{
        int i = 2,isprime = 0;
        while(i < num/2){
            if(num % i == 0 ){
                printf("%d is not a prime number",num);
                isprime = 1;
                break;
            }
            i++;
        }
        if(isprime == 0){
            printf("%d is a prime number",num);
        }
    }
}
