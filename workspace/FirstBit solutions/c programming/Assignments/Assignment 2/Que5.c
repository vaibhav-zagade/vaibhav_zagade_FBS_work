/*Accept the price from user. Ask the user if he is a student (user may say y or n). If he
is a student and he has purchased more than 500 than discount is 20% otherwise
discount is 10%.But if he is not a student then if he has purchased more than 600
discount is 15% otherwise there is not discount.*/

void main(){
    double price = 1200.00,discount = 0,i = 0;
    char isStudent = 'y';
    if(isStudent == 'y'){
        if(price > 500){
            discount = price * 0.2;
        }
        else{
            discount = price *0.1;
        }
    }
    else if(isStudent == 'n'){
        if(price > 600){
            discount = price * 0.15;
        }
    }
    else{
        i = 1;
        printf("Invalid input\n");
    }

    if(i == 1){
        printf("Fill the inputs again");
    }
    else{
        if(discount!=0){
            printf("price = %.2f \ndiscount = %.2f \ndiscounted price = %.2f",price,discount,price-discount);
        }
        else{
            printf("price = %.2f",price);
        }
       
    }
    
}