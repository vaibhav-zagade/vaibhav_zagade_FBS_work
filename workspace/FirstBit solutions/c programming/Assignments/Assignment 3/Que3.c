// Sum of numbers in given range.
// Find sum of numbers from start to end.
// Input: start = 1, end = 5
// Output: 15

void main(){
    int start, end, sum = 0;
    printf("Enter starting number : ");
    scanf("%d",&start);
    printf("Enter ending number : ");
    scanf("%d",&end);

    int i = start;

    while(i <= end){
        sum = sum + i;
        i++;
    }
    printf("sum is : %d",sum);
}
