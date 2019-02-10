#include <stdio.h>
#define MAX_SIZE 100    

int main()
{
    int arr[MAX_SIZE];
    int n;
    int i, j, temp;

    /* Input size of array */
    printf("Enter size of array: ");
    scanf("%d", &n);

    /* Input elements in array */
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
           if(arr[i] > arr[j])
            {
                temp     = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

       printf("\nElements of array in ascending order: ");
    for(i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
