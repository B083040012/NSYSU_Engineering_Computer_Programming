#include<stdio.h>

long long power(long long x,long long n){
    if(n==0) return 1;
    else if(n==2) return x*x;
    else if(n%2) return x*power(x,n-1);
    else return power(power(x,n/2),2);
}

int main(){
    long long x,n;
    printf("Enter x,n:");
    scanf("%lli,%lli",&x,&n);
    printf("Answer:%lli\n",power(x,n));
}