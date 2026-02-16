void even_or_odd();
void pal_check();
void leap_year_check();
void vowel_consonant_check();
void Eligible_to_vote();
void Uppercase_or_lowercase();
void total_salary();
void calculator();
void find_tri_type();
void find_greater_number();
void result();
void price();
void divisibility();
void maturity();


void main(){
   leap_year_check();

}

void even_or_odd(){
    int num = 125;
    if(num % 2 == 0){
        printf("%d is even\n",num);
    }
    else{
        printf("%d is odd\n",num);
    }
    pal_check();
}

void pal_check(){
    int num = 121;
    
    if(num %10 == num/100){
        printf("%d is a palindrome\n",num);
    }
    else{
        printf("%d is not a palindrome\n",num);
    }
}

void leap_year_check(){
    int year = 2000;
    if( year%4==0 && year%100!=0 || year%400==0 ){
        printf("%d is leap year",year);
    }
    else{
        printf("%d is not a leap year",year);
    }
}

void vowel_consonant_check(){
    char alpha = 'i';
    if(alpha == 'a' || alpha == 'e' || alpha=='i' || alpha=='o' || alpha=='u' ){
        printf("%c is vowel",alpha);
    }
    else{
        printf("%c is consnant",alpha);
    }
}

void Eligible_to_vote(){
    int age = 25;
    if(age>=18){
        printf("person is eligible to vote");
    }
    else{
        printf("person is not eligible to vote");
    }
}

void Uppercase_or_lowercase(){
    char ch = 'd';
    if(ch>='a' && ch<='z'){
        printf("character %c is uppercase",ch);
    }
    else if(ch>='A' && ch<='Z'){
        printf("character %c is lowercase",ch);
    }
    else{
        printf("Not a alphabet");
    }
}

void total_salary(){
    double basic = 6000,da,ta,hra,total_sal;
    if(basic <= 5000){
        da = basic*0.1;
        ta = basic*0.2;
        hra =  basic*0.25;  
    }
    else{
        da = basic*0.15;
        ta = basic*0.25;
        hra =  basic*0.3;
    }
    total_sal = basic + da + ta + hra;
    printf("Total salary is %.2f (with da = %.2f, ta = %.2f, hra = %.2f)",total_sal,da,ta,hra);
}

void calculator(){
    int num1 = 98,num2 = 50;
    char op = '/';
    if(op=='+'){
        printf("%d + %d = %d",num1,num2,num1+num2);
    }
    else if(op=='-'){
        printf("%d - %d = %d",num1,num2,num1-num2);
    }
    else if(op=='*'){
        printf("%d * %d = %d",num1,num2,num1*num2);
    }
    else if(op=='/'){
        printf("%d / %d = %.2f",num1,num2,(float)num1/num2);
    }
    else if(op=='%'){
        printf("%d  %% %d = %d",num1,num2,num1%num2);
    }
    else{
        printf("Invalid operator");
    }
}

void find_tri_type(){
    int s1=20,s2=10,s3=30;
    if(s1>0 && s2>0 && s3>0){
        if(s1==s2 && s2==s3){
            printf("The triangle is equilateral triangle.");
        }
        else if(s1==s2 || s2==s3 || s1==s3){
            printf("The triangle is isosceles triangle.");
        }
        else{
            printf("The triangle is scelen triangle.");
        }
    }
    else{
        printf("Invalid sizes.");
    }
}

void find_greater_number(){
    int num1 = 20,num2 = 50, num3 = 60;
    if(num1 > num2 && num1 > num3){
        printf("%d is greater among the numbers",num1);
    }
    else{
        if(num2 > num3){
            printf("%d is greater among the numbers",num2);
        }
        else{
            printf("%d is greater among the numbers",num3);
        }
    }
}

void result(){
    float marks = 65;
    printf("marks = %.2f\n",marks);
    if(marks > 75){
        printf("result = Distinction");
    }
    else if(marks > 65){
        printf("result = First Class");
    }
    else if(marks > 55){
        printf("result = Second Class");
    }
    else if(marks >= 40){
        printf("result = Pass Class");
    }
    else{
        printf("result = Fail");
    }
}


void price(){
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

void divisibility(){
    int num = 1546575;
    if(num % 3 == 0 && num % 5 != 0){
        printf("Divisible by 3 but not by 5");
    }
    else if(num % 5 == 0 && num % 3 != 0){
        printf("Divisible by 5 but not by 3");
    }
    else if(num % 3 == 0 && num % 5 == 0){
        printf("Divisible by both");
    }
    else{
        printf("Divisible by None");
    }
}

void maturity(){
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
