void main(){
    int arr[5]= {55,48,65,89,65};
    int even[5],odd[5];
    int j =0,k=0;
    int size = sizeof(arr)/ sizeof(int);


    for(int i = 0; i < size; i++){
        if(arr[i]%2==0){
            even[j]=arr[i];
            j++;
        }
        else{
            odd[k]=arr[i];
            k++;
        }
    }
    printf("Even Numbers : ");
    for(int i=0; i<j; i++){
        printf("%d ",even[i]);
    }
    printf("\n");


    printf("odd Numbers : ");
    for(int i=0; i<k; i++){
        printf("%d ",odd[i]);
    }
}
