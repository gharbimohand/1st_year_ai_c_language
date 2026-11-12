#include <stdio.h>
#include <math.h>

int main () {
    float a,b,c,x,x1,x2,delta;
    printf("Enter the value of a\n");
    scanf("%f", &a);
    printf("Enter the value of b\n");
    scanf("%f", &b);
    printf("Enter the value of c\n");
    scanf("%f", &c);
    delta=b*b-4*a*c;
    printf("Delta =%f\n",delta);

    if (a==0){
        if (b==0){
            if (c==0){
                printf("X can take all the values in R");
            }
            else {
                printf("No solution in R");
            }
        }
        else {
            if (c==0){
                printf("X can take all the values in R");
            }
            else {
                x=-c/b;
                printf("X =%f",x);
            }
        }
    }
    else {
        if (b==0){
            if (c==0){
                printf("X can take all the values in R");
            }
            else {
                x=-c/a;
                if (-c/a < 0){
                    printf("There are no Solutions");
                }
                else {
                    x1=-sqrt(-c/a);
                    x2=sqrt(-c/a);
                    printf("The solutions are X1= %f\nX2= %f",x1,x2);
                }
            }
        }
        else {
            if (delta <0 ){
                printf("No solutions in R");
            }
            else if (delta==0){
                x=-b/2*a;
                printf("X=%f",x);
            }
            else {
                x1=(-b-sqrt(delta))/2*a;
                x2=(-b+sqrt(delta))/2*a;
                printf("X1= %f\nX2= %f",x1,x2);
            }
        }
    }
}
