
#include <stdio.h>

int print_list(int l[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d  | ", l[i]);
    }
}

void swap_n(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void bubble_sort(int l[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (l[j] > l[j + 1])
            {
                swap_n(&l[j], &l[j + 1]);
            }
        }
    }
    print_list(l, n);
}

int main(int argc, char const *argv[])
{

    int l[] = {100, 23, 41234, 32, 2, 1, -4};
    int n = sizeof(l) / sizeof(l[0]);
    printf("Unsorted:\n");
    printf("Size: %d \n", n);
    print_list(l, n);
    printf("\n");
    printf("Sorted:\n");
    bubble_sort(l, n);
    return 0;
}
