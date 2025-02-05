#include <stdio.h>

int main() {
    char username[100];
    int userage;
    char userhobby[100];
    printf("");
    scanf("%s %d %s",&username,&userage,&userhobby);
    printf("Name: %s\n",username);
    printf("Age: %d\n",userage);
    printf("Hobby: %s\n",userhobby);
    return 0;
}