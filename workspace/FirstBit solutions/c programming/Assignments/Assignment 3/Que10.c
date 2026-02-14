// Find Sum of first and last digit of given number.
// Input: n = 12345
// Output: 6 (1 + 5)

void main(){
    int n = 654654,fd,ld;
    ld = n % 10;
    int temp =n;

    while(temp > 0){
        fd = temp % 10;
        temp = temp / 10;
    }
    printf("%d (%d + %d)", fd+ld, fd, ld);
}
