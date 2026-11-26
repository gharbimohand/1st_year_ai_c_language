#include <stdio.h>

int main (){
    int i,j,N,x;
    int v[100];

    printf("Enter the value of Numbers you want: \n");
    do {
        scanf("%d", &N);
    } while (N < 0 );

    for (i=1;i<=N;i++){
        printf("Number %d: ", i);
        scanf("%d", &v[i]);
    }
    if (N == 0){
        printf("Error");
        return 0;
    }
    
    for (j=1;j<=N-1;j++){
        for (i=j+1;i<=N;i++){
            if (v[i]<v[j]){ //Note: we can make v[i]>v[j] to show the values from the largest to the sameller one.
                x=v[j];
                v[j]=v[i];
                v[i]=x;
            }
        }
    }
    printf("The final values Are: \n");
    for (i=1;i<=N;i++){
        printf("%d ", v[i]);
    }
    
}
