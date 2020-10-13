#include <stdio.h>

void insertion_sort(int l[], int n)
{
    int i, j, val;

    for (i = 1; i < n; i++)
    {

        val = l[i];
        j = i - 1;

        while (j >= 0 && val < l[j])
        {
            l[j + 1] = l[j];
            j--;
        }
        l[j + 1] = val;
    }
}

void print_array(int l[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d |", l[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{

    int arr[] = {6,
                 4,
                 21,
                 2,
                 43,
                 53,
                 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    print_array(arr, n);
    insertion_sort(arr, n);
    print_array(arr, n);

    return 0;
}
