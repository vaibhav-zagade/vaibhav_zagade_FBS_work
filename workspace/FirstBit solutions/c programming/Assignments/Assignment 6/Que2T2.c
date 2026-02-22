void numbers(){
	int no=1;
	while(no<=10){
		printf("%d\n",no);
		no++;
	}
}


void prime(int no){
	int count = 0;
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
	
}


void sum_of_numbers(int start, int end){
	int sum=0;
	int i = start;
	while(i<=end){
		sum = sum+i;
		i++;
	}
	printf("Sum of numbers from %d to %d is %d",start,end,sum);
}


void armstrong(int n){
	int original,r,sum=0;
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
	
	
}


void table(int no){
	int i = 1;
	while(i<=10){
		int mult = no*i;
		printf("%d X %d = %d\n",no,i,mult);
		i++;
	}
}
void main(){
	int start=10,end=20;
	int no = 15,n=146;
	numbers();
	table(no);
	sum_of_numbers(start,end);
	prime(no);
	armstrong(n);
}
