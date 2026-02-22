//void Even_Odd();
//1
#include<stdio.h>
int Even_Odd(){

	int no;
	printf("Enter a number ");
	scanf("%d",&no);
	if(no%2==0)
		return 1;
	else
		return 0;
}

//2
int palindrome(){
	int FirstNo,LastNo,no;
	printf("Enter a number ");
	scanf("%d",&no);
	FirstNo = no/100;
	LastNo = no%10;
	if(FirstNo==LastNo)
		return 1;
	
	else
		return 0;
	
}

//3
int leap_year_or_not(){
	int year;
	printf("Enter a year ");
	scanf("%d",&year);
	if(year%4==0&&year%100!=0||year%400==0)
		return 1;
	else
		return 0;
	
}

//4
int vowel_consonant(){
	char ch;
	printf("Enter a character ");
	scanf(" %c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
	   ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	   	return 1;
	else
		return 0;
	
	
}

//5
int eligible_to_vote(){
	int age;
	printf("Enter age ");
	scanf("%d",&age);
	if(age>=18){
		return 1;
	}
	else{
		return 0;
	}

}

//6
int uppercase_lowercase(){
	char ch;
	printf("Enter a character ");
	scanf(" %c",&ch);
    if(ch>='a'&&ch<='z'){
    	return 1;
	}
	else{
		return 0;
	}
	
}

//7
void salary_basic(){
	int da,ta,hra,BasicSalary = 7000;
	printf("Enter basic salary");
	scanf("%d",&BasicSalary);
	if(BasicSalary<=5000){
		da = BasicSalary * 0.10;
		ta = BasicSalary * 0.20;
		hra = BasicSalary * 0.25;
	}
	else{
		da = BasicSalary * 0.15;
		ta = BasicSalary * 0.25;
		hra = BasicSalary * 0.30;
	}
	int total = BasicSalary+da+ta+hra;
	printf("basic salary is %d",BasicSalary);
	printf("\nDA is %d",da);
	printf("\nTA is %d",ta);
	printf("\nHRA is %d",hra);
	printf("\nTotal salary is %d",total);
}
//8

void calculator(){
	int no1,no2;
	char op;
	printf("Number 1 = ");
	scanf("%d",&no1);
	printf("Number 2 = ");
	scanf("%d",&no2);
	printf("operation = ");
	scanf(" %c",&op);
	if(op=='+'){
		int add = no1+no2;
		printf("The addition of the two number is %d",add);
	}else{
		if(op=='-'){
			int sub = no1-no2;
			printf("The Substraction of the two number is %d",sub);
		}else{
			if(op=='*'){
				int mult = no1*no2;
				printf("The Multiplication of the two number is %d",mult);
			}else{
				if(op=='/'){
					float div = no1/no2;
					printf("The Division of the two number is %f",div);
				}else{
					int mod = no1%no2;
					printf("The Reminder of the two number is %d",mod);
				}
			}
		}
	}
	
}


void type_of_triangle(){
	int s1,s2,s3;
	printf("Enter side 1 ");
	scanf("%d",&s1);
	printf("Enter side 2 ");
	scanf("%d",&s2);
	printf("Enter side 3 ");
	scanf("%d",&s3);
	if(s1==s2&&s2==s3)
		printf("Eqilateral triagnle");
	else if(s1==s2||s2==s3||s3==s1)
			printf("Isoscalen triangle");
		else
			printf("Scalen triangle");
		
	
	
}


void greater_no(){
	int a,b,c;
	printf("Enter number 1");
	scanf("%d",&a);
	printf("Enter number 2");
	scanf("%d",&b);
	printf("Enter number 3");
	scanf("%d",&c);
	if(a>b){
		if(a>c){
			printf("a is greater");
		}
		else{
			printf("c ie greater");
		}
	}
	else{
		if(b>c){
			printf("b is greater");
		}
		else{
			printf("c is greater");
		}
	}
	
}


void cal_grade(){
	int marks;
	printf("Enter marks");
	scanf("%d",&marks);
	if(marks>75)
		printf("Distinction");
	else
		if(marks>65)
			printf("First Class");
		else
			if(marks>55)
				printf("Second Class");
			else
				if(marks>40)
					printf("Pass Class");
				else
					printf("Fail");
	
}


void discount(){
	int price;
	printf("Enter price ");
	scanf("%d",&price);
	char ch;
	printf("Enter your are student or not y/n ");
	scanf(" %c",&ch);
	int discount = 0;
	if(ch=='y'){
		if(price>500){
			discount = price*0.20;
			printf("Discount is %d ",discount);
		}
		else{
			discount = price*0.10;
			printf("Discount is %d ",discount);
		}
	}
	else{
		if(price >600){
			discount = price*0.15;
			printf("Discount is %d ",discount);
		}
		else{
			printf("No disount ");
		}
	}
	printf("\nThe actual price is %d\nFinal price is %d",price,price-discount);
	
}


void divisibility(){
		int no = 14;
		printf("Enter a number ");
		scanf("%d",&no);
	if(no%3==0&&no%5==0)
		printf("Number is divisible by both");
	else
		if(no%3==0)
			printf("The number is divisible by 3 but not by 5");
		else
			if(no%5==0)
				printf("The number is divisible by 5 but not by 3");
			else
				printf("The number is divisible by none");
	
}
void age(){
	int age;
	printf("Enter age ");
	scanf("%d",&age);
	printf("The given age  is %d\n",age);
	if(age<12){
		printf("Child");
	}
	else{
		if(age>=12&&age<=19){
			printf("Teenager");
		}
		else{
			if(age>=20&&age<=59){
				printf("Adult");
			}
			else
			printf("Senior");
		}
	}

}

void main(){
	
	printf("Enter a choice for following operations \n");
	printf("press  \n");
	printf("1. To check the number is even or odd.\n");
	printf("2. To check the given number is palindrome or not. \n");
	printf("3. To check the year is leap or not.\n");
	printf("4. To check the character is vowel or consonant.\n");
	printf("5. To check the person is eligible to vote or not. \n");
	printf("6. To chech the character is UPPERCASE or lowercase. \n");
	printf("7. To check the sallary basic based on sallary.\n");
	printf("8. To perform basic calculations.\n");
	printf("9. To identify type of trianlge based on sides of triangle.\n");
	printf("10. To find the greter number among the three numbers.\n");
	printf("11. To calculate grades based on marks.\n");
	printf("12. To calculate the discount.\n");
	printf("13. To check the given number is divisible by 3 or 5.\n");
	printf("14. To chech the person status based on age.\n");
	int choice;
	printf("Enter a choice = ");
	scanf("%d",&choice);
	
	
	if	(choice==1)
		if(Even_Odd())	
			printf("Even number ");
		else
			printf("Odd number ");
	else if(choice==2)
		if(palindrome())
			printf("The number is palindrome");
		else
			printf("The number is not palindrome");
	else if(choice==3)
		if(leap_year_or_not())
			printf("Leap year");
		else
			printf("Not leap year");
	else if(choice==4)
			if(vowel_consonant())
				printf("Vowel");
			else
				printf("Consonant");
	else if(choice==5)
			if(eligible_to_vote())
				printf("Yes person is eligible to vote");
			else 
				printf("No person is not eligible to vote");
	else if(choice==6)
			if(uppercase_lowercase())
				printf("Given chaacter is lowercase");
			else
				printf("Given character is UPPERCASE");
	else if(choice==7)
				salary_basic();
	else if(choice==8)
				calculator();
	else if(choice==9)
				type_of_triangle();
	else if(choice==10)
				greater_no();
	else if(choice==11)
				cal_grade();
	else if(choice==12)
				discount();
	else if(choice==13)
				divisibility();
	else if(choice==14)
				age();
		else
			printf("ENVALID CHOICE");
				
				
}
