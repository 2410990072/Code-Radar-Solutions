#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  for(int i=1;i<=2*n-1;i++){
    int stars=i<=n ? i:2*n-1;
    for(int j=0;j<n-stars;j++) printf(" ");
    for(int j=0;j<2*stars-1;j++) printf("*");
    printf("\n");
  }  
  return 0;
}