#include <stdio.h>
int main()
{
    int l, hi, i, flag;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &l, &hi);

    printf("Prime numbers between %d and %d are: ", l, hi);

    while (l < hi)
    {
        flag = 0;

        for(i = 2; i <= l/2; ++i)
        {
            if(l % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", l);

        ++l;
    }

    return 0;
}
