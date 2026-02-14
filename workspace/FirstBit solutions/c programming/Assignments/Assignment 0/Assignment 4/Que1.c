// Print armstrong numbers in the given range 1 to n

#include <stdio.h>

void main(){
    int n;
    printf("Enter a number to find armstrong numbers till then : ");
    scanf("%d",&n);

    for(int num = 1; num <= n; num++){
        int digits = 0;
        int i = num;
        int temp = num;
        int rem;
        
        while(i > 0){
            i = i / 10;
            digits++;
        }
        int sum = 0;
        while(temp > 0){
            rem = temp % 10;
            int m = 1;
            for(int l = 1; l <= digits; l++){
                m = rem * m;
            }
            sum = sum + m;
            temp = temp / 10;
        }
        if(sum == num){
            printf("%d \n",num);
        }
    }
}
