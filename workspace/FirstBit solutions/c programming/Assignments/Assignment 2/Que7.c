/*Accept the age and check if the person is:
Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)*/

void main(){
    int age = 19;
    if(age < 12){
        printf("Person is Child");
    }
    else if(age >= 12 && age <= 19){
        printf("Person is Teenager");
    }
    else if(age >= 20 && age <= 59){
        printf("Person is Adult");
    }
    else{
        printf("Person is Senior");
    }
}