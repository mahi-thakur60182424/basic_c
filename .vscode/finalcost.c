#include<stdio.h>
 int main(){
float  price[3];
printf("enter 3 prices");
scanf("%f",&price[0]);
scanf("%f",&price[1]);
scanf("%f",&price[2]);
printf("total price 1: %f\n", price[0]+(18.0*price[0]));
printf("total price  2 :%f\n", price[0]+(18.0*price[1]));
printf("total price 3: %f\n", price[0]+(18.0*price[2]));

     return 0;
 }