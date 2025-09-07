#include<stdio.h>
#include<math.h>

int main(){
    printf("Welcome to the Quadratic Roots Calculator\n");
    int a, b, c;
    int d;
    double root1, root2;
    printf("Enter coeff. a = ");
    scanf("%d", &a);
    printf("\nEnter coeff. b = ");
    scanf("%d", &b);
    printf("\nEnter coeff. c = ");
    scanf("%d", &c);

    d = b*b - 4*a*c;
    if(d>=0){
    root1 = (-b + sqrt(d)) / (2.0 * a);
    root2 = (-b - sqrt(d)) / (2.0 * a);

    printf("\nRoot1 = %lf\n", root1);
    printf("Root2 = %lf\n", root2);
    }
    else{
        printf("\nImaginary Roots\n");
    }
printf("Thank You for using the Quadratic Roots Calculator\nMade by Shantanu");
    return 0;
}

