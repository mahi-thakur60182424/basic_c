#include<stdio.h>
 int main()
 {
    int n;
    printf("enter a  number");
    scanf("%d",&n);
    if(n%2==0){
        printf("even");
    }
    else if (n==0){
        printf("zero");
    }
    else{
        printf("odd");
    }
   
    return 0;
 }