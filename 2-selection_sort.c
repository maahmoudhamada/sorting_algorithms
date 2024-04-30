#include "sort.h"

/**
* selection_sort - Function that sorts array using selection sort algorithm
*
* @array: Array to be sorted
* @size: Size of the array
*
* Return: Void
*/

void selection_sort(int *array, size_t size)
{
size_t i = 0, j = 0, m = 0;
int tmp;

if (array == NULL || size < 2)
return;

for (i = 0; i < size - 1; i++)
{
m = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[m])
m = j;
}
if (m != i)
{
tmp = array[i];
array[i] = array[m];
array[m] = tmp;
print_array(array, size);
}
}
}

