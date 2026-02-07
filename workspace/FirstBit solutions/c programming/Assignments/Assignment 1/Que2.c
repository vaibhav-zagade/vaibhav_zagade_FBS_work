//checking 3 digit number is palindrome or not.
void main(){
    int num = 121;
    
    if(num %10 == num/100){
        printf("%d is a palindrome",num);
    }
    else{
        printf("%d is not a palindrome",num);
    }
}
