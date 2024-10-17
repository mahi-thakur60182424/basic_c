#include<stdio.h>
int main(){
    int n;
    do{
    printf("enter a number");
    scanf("%d",&n);
    printf("%d",n);
    if(n % 7 ==0){
        break; // multiple of 7
    }
     } while(1);
    printf("thankyou");
    return 0;
}