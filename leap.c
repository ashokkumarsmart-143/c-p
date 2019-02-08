#include <stdio.h>

int main()
{
    int y;

    printf("Enter a year: ");
    scanf("%d",&y);

    if(year%4 == 0)
    {
        if( y%100 == 0)
        {
            
            if ( y%400 == 0)
                printf("yes");
            else
                printf("no");
        }
        else
            printf("no");
    }
    else
        printf("no");
    
    return 0;
}
