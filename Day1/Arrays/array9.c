// Find the leader Elements
// leader element in an array is greater than all the elements to its right ,
#include <stdio.h>
#define size 6

int main()
{
    // 16 17 4 3 5 2
    // const int size = 6; i have to write #define variable constant_value_that_i_want_to_assign_in_it (and no semicolone or ending symbole just the constant value i have to insert)
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < size; j++)
    {
        int count = 0, target = 0;
        for (int k = (j + 1); k < size; k++)
        {
            target = j + 1;
            if (arr[j] > arr[k])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        if (count == (size - target))
        {
            printf("%d", arr[j]);
            if (j != (size - 1))
            {
                printf(", ");
            }
        }
        if (j == (size - 1))
        {
            printf("%d\n", arr[j]);
        }
    }

    return 0;
}