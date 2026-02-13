// Check the given number is Armstrong number or not..
// Input: n = 153
// Output: Armstrong

void main(){
    int num = 153,sum = 0,r,n;
    n = num;

    while(n > 0){
        r = n % 10;
        sum = sum + (r*r*r);
        n = n / 10;
    }
    if(sum == num){
        printf("%d is armstrong number",num);
    }
    else{
        printf("%d is not armstrong number",num);   
    }

}
