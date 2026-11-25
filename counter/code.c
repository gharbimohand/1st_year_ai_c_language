#include <stdio.h>
int main (){
    int count,i,N,val;
    float x;
    printf("How many numbers you want to enter :\n");
    scanf("%d", &N);

    if (N<=0){
        printf("Error.");
        return 0;   
    }

    printf("What is the value you want to count :\n");
    scanf("%d", &val);
    count=0;
    
    for (i=1; i<=N; i++){
        printf("Enter the Number %d : ",i );
        scanf("%f", &x);
        if (x==val){
            count=count+1;
        }
        
    }
    printf("Total numbers of %d is %d\n",val, count);
}
