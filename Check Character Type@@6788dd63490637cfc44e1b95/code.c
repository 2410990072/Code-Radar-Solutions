#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main() {
    char a;
    scanf("%c",&a);
    printf("%s",isdigit(a) ? "Digit":(isaplpha(a) ? (strchr("aeiuoAEIOU",a) ? "Vowel": "Consonant"):"Special Character"));
    
    
}