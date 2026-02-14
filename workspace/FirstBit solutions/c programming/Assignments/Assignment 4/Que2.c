// Print prime numbers in the given range 1 to n.


void main(){
    int n;
    printf("Enter n to find prime numbers from 1 to n : ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++){
        int isprime = 1;
        if(i<=1){
            continue;
        }
        else{
            for(int j = 2;j<=i/2;j++){
                if(i % j == 0){
                    isprime = 0;
                    break;
                }
            }
            if(isprime == 1){
                printf("%d\n",i);
            }
        }
        
    }
}
