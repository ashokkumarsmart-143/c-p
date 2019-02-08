#include <stdio.h>
int main()
{
    char r;
    int Lowercase, Uppercase;
    printf("Enter an alphabet: ");
    scanf("%c",&r);
    Lowercase = (r == 'a' || r == 'e' || r == 'i' || r == 'o' || r == 'u');
    Uppercase = (r == 'A' || r == 'E' || r == 'I' || r == 'O' || r == 'U');
    if (Lowercase || Uppercase)
        printf("%c is a vowel.", r);
    else
        printf("%c is a consonant.", r);
    return 0;
}
