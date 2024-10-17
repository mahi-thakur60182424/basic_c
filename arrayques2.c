//write a program to read marks of 10 students and also calcluate the sum and average using arrays
#include<stdio.h>
int main(){
    int arr[10],sum = 0,average;
    for(int i = 0 ; i < 10 ; i++){
        printf("enter a number : ");
        scanf("%d",&arr[i]);
    }
    printf("elements in arrays are : ");
    for(int i = 0 ; i < 10 ; i++){
        printf("%d , ",arr[i]);
    }
    //sum
    for(int i = 0 ; i < 10 ; i++){
        sum += arr[i];
    }
    printf("\n");
    printf("sum of these elements are : ");
    printf("%d" , sum);
     printf("\n");
    printf("average is : ");
    average = sum / 10;
    printf("%d" , average);
}