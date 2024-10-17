#include <stdio.h>

int main() {
    int arr[10];
    int i,odd = 0,even  = 0;

  
        printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++)
             {
        scanf("%d", &arr[i]);
              }

   
    for (i = 0; i < 10; i++) 
        {
        if (arr[i] % 2 == 0) 
           {
            even++;
           } 
        else
         {
            odd++;
          }
        }


    printf(" even elements: %d\n", even);
    printf("odd elements: %d\n", odd);

    return 0;
}
