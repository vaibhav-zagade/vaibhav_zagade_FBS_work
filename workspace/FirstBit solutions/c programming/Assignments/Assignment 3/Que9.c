// Check the given number is Palindrome number or not.
// Input: n = 121
// Output: Palindrome

void main(){
    int n = 122,rev = 0,rem;
    int temp = n;
    while(temp > 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    if(n == rev)
    {
        printf("number is Palindrome");
    }
    else
    {
        printf("Not a palindrome");
    }
}
