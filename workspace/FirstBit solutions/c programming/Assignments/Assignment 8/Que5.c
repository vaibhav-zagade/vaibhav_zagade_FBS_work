void main(){
    int arr[5]= {55,48,65,89,28};
    int size = sizeof(arr)/ sizeof(int);

    printf("Alternate numbers : ");
    for(int i = 0; i < size; i=i+2){
        printf("%d ",arr[i]);
    }
}
