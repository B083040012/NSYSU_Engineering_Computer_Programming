#include<stdio.h>

int main(){
    printf("Please enter integer n:");
    double sum=1,n;
    scanf("%lf",&n);
    for(int i=1;i<=n;i++){
        double temp=1;
        for(int k=1;k<=i;k++){
            temp*=k;
        }
        sum+=1.0/temp;
    }    
    printf("Ans is : %lf",sum);
}