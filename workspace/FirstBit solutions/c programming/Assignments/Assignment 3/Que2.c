// Print table for given number.
// Input: n = 5
// Output: 5 10 15 20 25 30 35 40 45 50

void main(){
    int n , pro , i = 1;
    printf("Enter number to get table");
    scanf("%d",&n);

    while(i <= 10){
        pro = i * n;
        printf(" %d",pro);
        i++;
    }
}
