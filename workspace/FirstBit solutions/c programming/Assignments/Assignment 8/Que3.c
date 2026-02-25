void main(){
    int arr[5]= {55,48,65,89,65};
    int sum = 0;
    int size = sizeof(arr)/ sizeof(int);


    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
    }
    printf("Sum of all numbers is %d",sum);
}
