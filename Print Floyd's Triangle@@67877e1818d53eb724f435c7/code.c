#include<stdio.h>
int main()
{    
    int N=1,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",N++);
            ++N;
        }
        printf("\n");
    }
    return 0; 
}