#include<stdio.h>
int main()
{
    int d;
    char dayname;
    printf("enter your weeek day: ");
    scanf("%d",&d);
    if(d>0 && d<=7) {
        dayname=(d==1)?"sunday":
                (d==2)?"monday":
                (d==3)?"tuesday":
                (d==4)?"wednesday":
                (d==5)?"thursday":
                (d==6)?"friday":
                (d==7)?"saturday": printf("invalid day");
        printf("conditional operator: my day is &s\n",dayname);

    }
    else{
        printf("day is between i to 7\n");
    }

    return 0;
}