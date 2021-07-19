#include<stdio.h>

int main(){
    int i=0;
    char* input;
    printf("Enter phone number: ");
    scanf("%s",input);
    while(input[i]){
        if(input[i]>='A' && input[i]<'Z' && input[i]!='Q') printf("%d",(input[i]-'A')/3+2);
        else printf("%c",input[i]);
        i++;
    }    
}