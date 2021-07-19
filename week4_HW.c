#include<stdio.h>

int main(){
    int input;
    printf("Enter a three-digit number:");
    scanf("%d",&input);
    while(input<100 || input>999){
        printf("Input must be a three-digit number!!\nPlease enter again...\nEnter a three-digit number:");
        scanf("%d",&input);
    }
    printf("The reversal is:");
    while(input!=0){
        printf("%d",input%10);
        input/=10;
    }
    printf("\n");
}