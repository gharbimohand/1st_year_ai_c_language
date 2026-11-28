#include <stdio.h>

int main () {
    int N,i,j,v[100],val;

    printf("Enter the value of N: ");

    do {
        scanf("%d", &N);
    } while (N < 0 || N >= 100 );

    for (i=1; i <= N ;i++){
        printf("Number %d: ", i);
        scanf("%d", &v[i]);
    }

    j = 1;

    for (i=1; i <= N ;i++){
        if (v[i] != 0){
            v[j] = v[i];
            j=j+1;
        }
    }

    N = j ;
    printf("The new values are: ");

    for (i=1; i < N ;i++) {  // Note: only the last one doesn't have (i <= N) 
        printf("%d ", v[i]);
    }
}
