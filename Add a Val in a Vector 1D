#include <stdio.h>

int main()
{
    int T[100], N;
    int pos, i, j, VAL;
    
    printf("Enter the number of elements in the vector: ");
    do {
        scanf("%d", &N);
    } while (N <= 0 || N >= 100);

    for (i=1;i<=N;i++){
        printf("Element %d: ", i);
        scanf("%d", &T[i]);
    }
    printf("Enter the Position you would change/insert: \n");
    do {
        scanf("%d", &pos);
    } while (pos <= 0 || pos > N);

    printf("Enter the value you want to insert: ");
    scanf("%d", &VAL);

    j=N;
    while(j >= pos){
        T[j+1]=T[j];
        j--;
    }
    T[pos]=VAL;
    N=N+1;
    for (j=1;j<=N;j++){
        printf("%d ", T[j]);
    }
}
