void main(){
    int arr[5]= {55,48,65,89,65},num;
    int isFound = 0;
    int size = sizeof(arr)/ sizeof(int);
    printf("Enter the number to find : ");
    scanf(" %d",&num);

    for(int i = 0; i < size; i++){
        if(arr[i]==num){
            printf("Found at %d",i+1);
            isFound=1;
            break;
        }
    }
    if(isFound==0){
    printf("!!!!!Not Found!!!!!");
    }
}
