

#include <stdio.h>

int main() {
    int i,j;
    scanf("%d",&i);
    for(i=5;i>=1;i--){
        for(j=1;j<5-i;j++){
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++){
            printf("*");
        }
    }
        printf("\n");
    }
    

    return 0;
}

