// Print a pattern of stars in diamond shape
// Input: n = 4
// Output:

//    *
//   * *
//  * * *
// * * * *
//  * * *
//   * *
//    *


void main(){
    int n = 6;

    for(int i = 1; i<= n; i++){
        for(int j = 1; j<= n - i;j++){
            printf(" ");
        }
        for(int j =1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }

    for(int i = 1; i<= n-1; i++){
        for(int j = 1; j<= i;j++){
            printf(" ");
        }
        for(int j =1; j <= n-i; j++){
            printf("* ");
        }
        printf("\n");
    }
}
