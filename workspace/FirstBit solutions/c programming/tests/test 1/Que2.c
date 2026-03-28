// Write a program to accept string from user and replace one character
// from special symbol.
#include<string.h>
void main(){
    char str[50];
    char ch;
    char s;
    printf("Enter a String : ");
    scanf("%[^\n]",str);

    int len = strlen(str);
    printf("Enter a character to replace : ");
    scanf(" %c",&ch);
    
    printf("Enter Symbol that to replace : ");
    scanf(" %c",&s);

    int flag = 0;

    for(int i = 0; i<=len; i++){
        if(str[i]==ch){
            str[i]=s;
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("character not found!!");
    }
    printf("%s",str);

}
