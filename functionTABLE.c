#include<stdio.h>
 int sum (int a, int b);
 void printtable(int n);
int main()
{
   int n;
   printf("enter a 1st no");
   scanf("%d",&n);
   printtable(n); // argumment ya actual parameter
     
    
      
    return 0;
}

void printtable(int n){ // parameter
    for(int i=1;i<=10;i++){
         printf("%d\n",i*n);
    }
}