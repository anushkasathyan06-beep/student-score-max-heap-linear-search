#include <stdio.h>

#define MAX 100

int heap[MAX];
int heapSize = 0;

void insertHeap(int value, int *comparisons, int *swaps)
{
    int i = heapSize;

    heap[heapSize] = value;
    heapSize++;

    *comparisons = 0;
    *swaps = 0;

    while (i > 0)
    {
        int parent = (i - 1) / 2;

        (*comparisons)++;

        if (heap[parent] < heap[i])
        {
            int temp = heap[parent];
            heap[parent] = heap[i];
            heap[i] = temp;

            (*swaps)++;
            i = parent;
        }
        else
        {
            break;
        }
    }
}

void displayHeap()
{
    for (int i = 0; i < heapSize; i++)
    {
        printf("%d ", heap[i]);
    }
    printf("\n");
}

int linearSearchMax(int arr[], int n, int *comparisons)
{
    int max = arr[0];

    *comparisons = 0;

    for (int i = 1; i < n; i++)
    {
        (*comparisons)++;

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    int scores[] = {78, 92, 65, 88, 95, 72, 84, 90};
    int n = 8;

    int totalComparisons = 0;
    int totalSwaps = 0;

    printf("MAX HEAP INSERTION\n");
    printf("------------------\n");

    for (int i = 0; i < n; i++)
    {
        int comparisons, swaps;

        insertHeap(scores[i], &comparisons, &swaps);

        totalComparisons += comparisons;
        totalSwaps += swaps;

        printf("\nAfter inserting %d:\n", scores[i]);
        printf("Heap: ");
        displayHeap();

        printf("Comparisons = %d\n", comparisons);
        printf("Swaps = %d\n", swaps);
    }

    printf("\nHighest score using Max Heap = %d\n", heap[0]);
    printf("Total insertion comparisons = %d\n", totalComparisons);
    printf("Total insertion swaps = %d\n", totalSwaps);

    int linearComparisons;

    int max = linearSearchMax(scores, n, &linearComparisons);

    printf("\nLINEAR SEARCH\n");
    printf("-------------\n");
    printf("Highest score using Linear Search = %d\n", max);
    printf("Comparisons = %d\n", linearComparisons);

    return 0;
}
