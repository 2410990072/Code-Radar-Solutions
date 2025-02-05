#include <stdio.h>

int main() {
    char username[100];
    int userage;
    char userhobby[100];
    printf("");
    scanf("%c %d %c",&username,&userage,&userhobby);
    printf("Name: %c\n",username);
    printf("Age: %d\n",userage);
    printf("Hobby: %c\n",userhobby);
    return 0;
}