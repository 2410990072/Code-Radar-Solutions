
#include <stdio.h>

int main() {
    int i, j,N=4; 
    scanf("%d",&N);

    for(i = 1; i <= N; i++) {
        for(j = i; j<= N; j++) {
            printf(" ");
        }
        
        for(j = 1; j <= (2*i - 1); j++) {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}
