#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using
 *                 the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
    size_t left = 0;
    size_t right = size - 1;
    size_t mid;

    if (array == NULL)
        return -1;

    while (left <= right)
    {
        size_t i;

        printf("Searching in array:");
        for (i = left; i <= right; i++)
        {
            if (i != left)
                printf(",");
            printf(" %d", array[i]);
        }
        printf("\n");

        mid = (left + right) / 2;

        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}
