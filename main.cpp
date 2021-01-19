#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if( arr[j] > arr[j+1])
            {
                // výmena
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    // roztriedena zatvorka
    printf("Sorted Array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}

int main()
{
    int arr[100], i, n, step, temp;
    // opýtaj sa na počet triedenych čísel
    printf("Koľko čísel chceš rozdeliť? ");
    scanf("%d", &n);
    // vlkadanie čísel
    for(i = 0; i < n; i++)
    {
        printf("Zadaj číslo. %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    // funkcia bubbleSort
    bubbleSort(arr, n);
    
    return 0;
}
