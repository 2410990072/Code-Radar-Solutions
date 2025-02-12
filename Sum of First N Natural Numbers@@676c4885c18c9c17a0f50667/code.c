#include<stdio.h>
int main()
{
    
    int N,sum=0,i=0;
    scanf("%d",&N);
        sum=0;
        while(i<=N){
            sum +=i;
            i++;
        }
        printf("%d\n",N,sum);
    return 0;
}