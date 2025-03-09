#include<stdio.h>
int main()
{    
    int N=1;
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",N);
            ++N;
        }
        printf("\n");
    }
    return 0; 
}