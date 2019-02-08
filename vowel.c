#include <stdio.h>
int main()
{
    char x;
    int Lowercase, Uppercase;
    printf("Enter an alphabet: ");
    scanf("%c",&x);
    Lowercase = (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u');
    Uppercase = (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U');
    if (Lowercase || Uppercase)
        printf("%c is a vowel.", x);
    else
        printf("%c is a consonant.", x);
    return 0;
}
