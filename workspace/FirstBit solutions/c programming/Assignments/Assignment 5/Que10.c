// Print a hollow square with diagonal pattern
// Input: n = 5
// Output:

// * * * * *
// * *     *
// *   *   *
// *     * *
// * * * * *

void main(){
    int n = 10;

    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= n; col++){
            if(row == 1 || col == 1 || row == col || row == n || col == n){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
