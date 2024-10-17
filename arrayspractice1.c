
 #include<stdio.h> 
int main()
{
    int a[5] = {5, 4, 3, 2, 1};
    int i;
    for (i = 4; i >= 0; i--) {  // Start from i=4 (last index) and decrement until i=0
        printf("%d ", a[i]);    // Correct array access: a[i]
    }
    return 0;
}
