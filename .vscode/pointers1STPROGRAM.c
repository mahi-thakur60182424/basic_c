#include<stdio.h>
 int main(){
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    // address
    printf("%p\n",&age);
  printf("%u\n",&age);
     return 0;
 } 