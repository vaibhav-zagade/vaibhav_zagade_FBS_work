void armstrong() {
    int no;
    printf("Enter a number ");
    scanf("%d", &no);
    int num = 1;
    while(num <= no) {
        int temp = num;
        int count = 0;
        while(temp > 0) {
            count++;
            temp = temp / 10;
        }
        temp = num;
        int sum = 0;
        while(temp > 0) {
            int r = temp % 10;
            int power = 1;
            int i = 1;
            while(i <= count) {
                power = power * r;
                i++;
            }
            sum = sum + power;
            temp = temp / 10;
        }
        if(sum == num) {
            printf("%d ", num);
        }
        num++;
    }
    printf("\n");
}

void strong(){
 	long no,r;
 	printf("Enter a number ");
 	scanf("%d",&no);
 	int i = 1;
	while(i<=no){
		int temp=i;
		int sum=0;
		while(temp>0){
			int r=temp%10;
			int fact = 1;
			for(int j =1;j<=r;j++){
				fact=fact*j;
			}
			sum=sum+fact;
			temp=temp/10;
		}
		if(sum==i)
			printf("%d ",i);
	i++;
}
	
printf("\n");	
	
}


void prime() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int num = 1;
    while(num <= n) {
        int i = 1;
        int count = 0;
        while(i <= num) {
            if(num % i == 0) {
                count++;
            }
            i++;
        }
        if(count == 2) {
            printf("%d ", num);
        }
        num++;
    }
    printf("\n");
}


void perfect(){
	long i,j,no,sum;
    printf("Enter a number = ");
  	scanf("%Dd",&no);
	for(i = 1;i<=no;i++){
		sum = 0;
		for(j = 1;j<=i/2;j++){
			if(i%j==0){
				sum = sum +j;
			}
		}
		if(sum==i&&i!=0){
		printf("%d ",i);
	}
	
	
}
printf("\n");
}


void menu(){
	int choice,no;
	printf("press");
	printf("1.To check number is even or odd.\n");
	printf("2.To check number is prime or not.\n");
	printf("3.To check number is pallindrome or not.\n");
	printf("4.To check number is positive, negative or zero.\n");
	printf("5.To reverse a number.\n");
	printf("6.To find sum of digits.\n");
    printf("Enter a choice in between 1 to 6 ");
    scanf("%d",&choice);
    printf("Enter a number to perform a operation ");
    scanf("%d",&no);
    if(choice==1){
    	if(no%2==0)
    		printf("Number is even");
		else
			printf("Number is odd");
	}
	else if(choice==2){
		int count;
		int i =1;
		while(i<=no){
			if(no%i==0)
				count++;
		i++;
			
		}
		if(count==2)
			printf("Number is prime ");
		else
			printf("Number in composite");
		
	}
	else if(choice==3){
		int temp,r,rev=0;
		temp = no;
		while(no>0){
			r=no%10;
			rev=rev*10+r;
			no=no/10;
		}
		if(temp==rev)
			printf("The number is palindrome");
		else
			printf("The number is not palindrome");
	}
	else if(choice==4){
		if(no>0)
			printf("The number is positive");
		else if(no<0)
			printf("The number is negative");
		else
			printf("The number is zero");	
	}
	else if(choice==5){
		int rev=0,r;
		while(no>0){
			r=no%10;
			rev= rev*10+r;
			no=no/10;
		}
		printf("The reverse number us %d ",rev);
		
	}
	else if(choice==6){
		int r,sum=0;
		while(no>0){
			r=no%10;
			sum=sum+r;
			no=no/10;
		}
		printf("The sum of digite is %d",sum);
	}
	else
		printf("Invalid choice");
}


void main(){
	armstrong();
	prime();
	perfect();
	strong();
	menu();
	
}
