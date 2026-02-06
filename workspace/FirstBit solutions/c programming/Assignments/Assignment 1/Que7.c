//calculating salary based on basic

void main(){
    double basic = 6000,da,ta,hra,total_sal;
    if(basic <= 5000){
        da = (basic*10)/100;
        ta = (basic*20)/100;
        hra =  (basic*25)/100;
        total_sal = basic + da + ta + hra;
        printf("Total salary is %d (with da = %d, ta = %d, hra = %d)",total_sal,da,ta,hra);
    }
    else{
        da = (basic*15)/100;
        ta = (basic*25)/100;
        hra =  (basic*30)/100;
        total_sal = basic + da + ta + hra;
        printf("Total salary is %d (with da = %d, ta = %d, hra = %d)",total_sal,da,ta,hra);
    }


}
