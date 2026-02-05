//checking 3 digit number is palindrome or not.
void main(){
    int num = 121,a,b,c,q1,rev_num;
    a = num % 10;
    q1 = num / 10;
    b = q1 % 10;
    c = q1 / 10;
    rev_num = a*100 + b*10 + c;
    
    if(num == rev_num){
        printf("%d is a palindrome",num);
    }
    else{
        printf("%d is not a palindrome",num);
    }
    
}