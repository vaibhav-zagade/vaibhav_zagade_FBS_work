// Check the given number is Strong number or not.
// Input: n = 145
// Output: Strong

void main(){
    int n = 145,rem,fact = 1,sum = 0;
    int temp = n;
    while(n > 0){
        rem = n % 10;
        n = n / 10;
        int i = 1;
        while(i <= rem){
            fact = fact * i;
            i++;
        }
        sum = sum + fact;
        fact = 1;
    }
    if(temp == sum){
        printf("Strong number");
    }
    else{
        printf("Not a strong number");
    }
}
