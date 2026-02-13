// Check the given number is Perfect number or not.
// Input: n = 28
// Output: Perfect


void main(){
    int n = 28,i = 1,sum = 0;
    while(i<=n/2){
        if(n%i == 0){
            sum =sum +i;
        }
        i++;
    }
    if(sum == n){
        printf("Perfect number");
    }
    else{
        printf("Not a perfect number");
    }
}
