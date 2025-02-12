

#include <stdio.h>

int main() {
    int i,j,N,space;
    printf("enter number of row: ",N);
    scanf("%d",&N);
    for(i=N;i>=1;i--){
        for(space=1;space<=N-i;space++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}

