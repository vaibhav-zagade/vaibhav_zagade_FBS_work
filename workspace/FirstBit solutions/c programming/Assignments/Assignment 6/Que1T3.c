#include<stdio.h>
int Even_Odd(int no){
//	printf("Enter a number ");
//	scanf("%d",&no);
	if(no%2==0)
		return 1;
	else
		return 0;
}

void salary(int BasicSalary){
	int da,ta,hra;
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
	printf("basic salary is %d\n",BasicSalary);
	printf("\nDA is %d\n",da);
	printf("\nTA is %d\n",ta);
	printf("\nHRA is %d\n",hra);
	printf("\nTotal salary is %d\n",total);
	
}

void lower_upper(char ch){
    if(ch>='a'&&ch<='z'){
    	printf("Given chaacter is lowercase\n");
	}
	else{
		printf("Given character is UPPERCASE\n");
	}
}


void vote_criteria(int age){
	if(age>=18){
		printf("Yes person is eligible to vote\n");
	}
	else{
		printf("No person is not eligible to vote\n");
	}
}

void vowel_consonant(char ch){
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
	   ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
	   	printf("Given character is Vowel \n");
	}
	else{
		printf("Given character is Consonant \n");
	}
}

void palindrome(int no){
	int FirstNo,LastNo;
	FirstNo = no/100;
	LastNo = no%10;
	if(FirstNo==LastNo){
		printf("Given number is palindrome \n");
	}
	else{
		printf("Given number is not a palindrome number\n");
	}
}

void leapYear(int year){

	if(year%4==0&&year%100!=0||year%400==0){
		printf("Given year is leap year\n");
	}
	else{
		printf("Given year is not a leap year\n");
	}
}

void main(){
	int no =20102;
	char ch= 'k';
	int BasicSalary=30000;
	int age =  20;
	if(Even_Odd(27))    //passing direct value as a parameter.
		printf("Even\n");
	else
		printf("Odd\n");
		
		
	palindrome(no);     //passing variable as a parameter.
	
	leapYear(2028);
	vowel_consonant(ch);
	vote_criteria(age);
	lower_upper(ch);
	salary(BasicSalary);
}
