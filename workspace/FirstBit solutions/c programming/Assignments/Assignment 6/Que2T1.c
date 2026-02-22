void print_no(){
		int no = 1;
	while(no<=10){
		printf("%d\n",no);
		no++;
	}
	printf("\n***********************************************************************************************\n");
}

int table(){
	printf("Enter a number to find the table ");
	int no;
	scanf("%d",&no);
	int i = 1;
	while(i<=10){
		int mult = no*i;
		printf("%d X %d = %d\n",no,i,mult);
		i++;
	}
	printf("\n***********************************************************************************************\n");
}
void no_from_to(){
	int start = 1,end = 5,sum = 0;
	printf("The start number is %d and end number is  %d \n",start,end);
	int i = start;
	while(i<=end){
		sum = sum+i;
		i++;
	}
	printf("Sum of numbers from %d to %d is %d",start,end,sum);
	printf("\n***********************************************************************************************\n");

}

void prime_or_not(){
	int no,count = 0;
	printf("Enter a number to chech the number is prime or not ");
	scanf("%d",&no);
	if(no<=1){
		printf("Not prime");
	}
	else{
		int i = 2;
		while(i<no/2){
			if(no%i==0)
				count = 1;
				break;
		i++;
		}
	}
	if(count==0)
		printf("Prime");
	else
		printf("not prime");
	printf("\n***********************************************************************************************\n");
}

void armstrong_or_not(){
	printf("Enter a number to check the number is armstrong or not ");
	int n,original,r,sum=0;
	scanf("%d",&n);
	original = n;
	while(n>0){
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(sum==original)
		printf("Armsgtrong");
	else
		printf("Not an armstrong");	
	
	printf("\n***********************************************************************************************\n");	
}

void perfect_or_not(){
	int no,temp,sum = 0;
	printf("Enter a number to check the number is perfect or not ");
	scanf("%d",&no);
	temp = no;
	if(no<=1){
		printf("The number is not perfect");
	}
	else{
		int i =1;
		while(i<=no/2){
			if(no%i==0)
			sum = sum +i;
			i++;
		}
		if(sum==temp)
			printf("The number is perfect");
		else
			printf("The number is not perfect");	
	}
		printf("\n***********************************************************************************************\n");
}

void factorial(){
	printf("Enter a number to find factorial ");
	int n,factorial;
	scanf("%d",&n);
	factorial = 1;
	int i = 1;
	while(i<=n){
		factorial = factorial*i;
		i++;
	}
	printf("Factorial is %d",factorial);
	printf("\n***********************************************************************************************\n");
}

void strong_no(){
	int no = 145,r,factorial,temp;
	printf("The number is %d \n",no);
	temp=no;
	int sum = 0;
	
	while(no>0){
		r=no%10;
		factorial=1;
		int i =1;
		while(i<=r){
			factorial=factorial*i;
			i++;
		}
		sum=sum+factorial;
		no=no/10;
	}
	if(sum==temp)
		printf("The number is Strong");
	else
	 	printf("The number is not strong");
	 	
	printf("\n***********************************************************************************************\n");	
}

void palindrome(){
	int n = 1215121,rev,r,original;
	printf("The number is %d \n",n);
	original=n;
	rev = 0;
	while(n!=0){
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(original==rev)
		printf("The number is palindrome");
	else
		printf("The number is not palondrome");
	printf("\n***********************************************************************************************\n");
}

void sum_of_firstandlast_digit(){
	int no = 12345,lno,sum;
	printf("The number is %d \n",no);
	lno=no%10;
	while(no>10){
		no=no/10;
	}
	sum = lno+no;
	printf("The sum of first and last number of a given number is %d",sum);
	printf("\n***********************************************************************************************\n");
}


void main(){
	print_no();
	palindrome();
	sum_of_firstandlast_digit();
	strong_no();
	no_from_to();
	table();
	prime_or_not();
	armstrong_or_not();
	perfect_or_not();
	factorial();
}
	
	
