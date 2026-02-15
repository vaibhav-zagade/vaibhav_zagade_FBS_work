// Print an inverted right-angled triangle pattern
// Input: n = 5
// Output:

// *****
// ****
// ***
// **
// *


void main(){
    int n = 10;
    
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            printf("*");
        }
        printf("\n");
    }
}
