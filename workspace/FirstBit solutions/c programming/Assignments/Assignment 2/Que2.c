/*Accept three sides of a triangle from the user and determine whether the triangle is
equilateral, isosceles, or scalene.*/

void main(){
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