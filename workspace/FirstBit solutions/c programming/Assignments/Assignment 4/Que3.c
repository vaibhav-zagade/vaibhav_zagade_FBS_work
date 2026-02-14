//  Print perfect numbers in the given range 1 to n.

void main(){
    int n;
    printf("Enter n to find the perfect number from 1 to n : ");
    scanf("%d",&n);

    for(int i = 1;i<=n;i++){
        int sum =0;
        for(int j = 1;j<i;j++){
            if(i%j==0){
                sum = sum + j;
            }
        }
        if(sum == i){
            printf("%d \n",i);
        }
    }
}
