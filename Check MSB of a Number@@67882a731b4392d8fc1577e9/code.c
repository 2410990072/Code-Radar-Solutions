#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    printf((num&(1<<31)) ? "Set\n": "Not Set\n");
    return 0;
}