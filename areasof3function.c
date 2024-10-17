#include<stdio.h>
// decalaration
float squarearea(float side);
float circlearea(float radius);
float rectangle(float a , float b);

int main() {
    float a = 5.0;
    float b = 10;
    // call the function
 printf("Square area: %f\n", squarearea(a));
    printf("Circle area: %f\n", circlearea(a));
    printf("Rectangle : %f\n", rectangle(a, b));



    return 0;
}
// defination
    float squarearea(float side){
    return side *  side;

    }
    float circlearea(float radius){
        return 3.14 * radius * radius;
    }
    float rectangle(float a , float b){
    return a * b;
    }
