#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    printf((num&(1<<31)) ? "Set\n": "Not Set\n");
    return 0;
}