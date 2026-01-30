//total marks and perrcentage of five subjects
void main(){
    int total_marks = 500;
    int physics = 85, chemistry = 87, math = 83, biology = 90, bhoogol = 99;
    int marks_obt = physics + chemistry + math + biology + bhoogol;
    float percentage = (marks_obt*100.0)/total_marks;
    printf("Total marks of 5 subjects is %d and percentage is %f",marks_obt,percentage);

}
