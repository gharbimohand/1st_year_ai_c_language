#include <stdio.h>

int main (){
    float min,max,x;
    int i,n;

    printf("How many numbers you want to enter :\n");
    scanf("%d", &n);
    printf("enter the values of the numbers  :\n");
    scanf("%f", &x);
    min=x;
    max=x;
    for (i=2; i<=n; i++){
        scanf("%f", &x);
        if (x<min){
            min=x;
        }
        if (x>max){
            max=x;
        }
    }
    printf("min= %f\n", min);
    printf("max= %f\n", max);
}
