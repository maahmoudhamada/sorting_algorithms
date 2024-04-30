#include "sort.h"

/**
 * swapping - Function to swap two elemnts in an array
 *
 * @x: First element
 * @y: Second element
 *
 * Return: Void
 */

void swapping(int *x, int *y)
{
int tmp;

tmp = *x;
*x = *y;
*y = tmp;
}

/**
 * lomutoPart - Function to scan elements in an array to swap
 *
 * @array: Array to sort
 * @start: First index in an array
 * @end: Last in dex in an array
 * @size: Size of the array
 *
 * Return: Void
 */

int lomutoPart(int *array, int start, int end, size_t size)
{
int pivot, x, y;

pivot = array[end];
x = start - 1;

for (y = start; y < end; y++)
{
if (array[y] < pivot)
{
x++;
if (x != y)
{
swapping(&array[x], &array[y]);
print_array(array, size);
}
}
}
if (array[x + 1] != array[end])
{
swapping(&array[x + 1], &array[end]);
print_array(array, size);
}
return (x + 1);
}

/**
 * quickSortHelper - Helper recursive function to sort an array
 *
 * @array: Array to sort
 * @start: First index in an array
 * @end: Last in dex in an array
 * @size: Size of the array
 *
 * Return: Void
 */

void quickSortHelper(int *array, int start, int end, size_t size)
{
int pv;

if (start < end)
{
pv = lomutoPart(array, start, end, size);
quickSortHelper(array, start, pv - 1, size);
quickSortHelper(array, pv + 1, end, size);
}
}

/**
* quick_sort - Function to sort an array using quicksort algo
*
* @array: Array to be sorted
* @size: Size of the array
*
* Return: Void
*/

void quick_sort(int *array, size_t size)
{
int start, end;

if (array == NULL || size < 2)
return;

start = 0, end = size - 1;
quickSortHelper(array, start, end, size);
}
