// Find factorial of given number.
// Input: n = 5
// Output: 120

void main(){
    int n =5,i=2,fact = 1;
    while(i <= n){
        fact = fact * i ;
        i++;
    }
    printf("%d",fact);
}
