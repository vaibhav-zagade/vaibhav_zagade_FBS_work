/* Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
respectively.*/

void main(){
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
