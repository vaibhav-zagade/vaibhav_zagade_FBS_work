void main(){
    int arr[5] = {15,75,86,-51,-56};

    int max=arr[0],min=arr[0];
    int size = sizeof(arr) / sizeof(int);
    for(int i = 1; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("Maximum number in an array is %d\n",max);
    printf("Minimum number in an array is %d",min);
}
