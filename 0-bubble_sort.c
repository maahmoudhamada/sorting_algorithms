#include "sort.h"

/**
* bubble_sort - Function to sort array using bubble algo
*
* @array: Array to be sorted
* @size: Size of the array
*
* Return: Void
*/
void bubble_sort(int *array, size_t size)
{
size_t i = 0, j = 0;
int swapped = 0;
int tmp;

if (array == NULL || size < 2)
return;

for (i = 0; i < size; i++)
{
for (j = 0; j < size - 1; j++)
{
if (array[j] > array[j + 1])
{
tmp = array[j];
array[j] = array[j + 1];
array[j + 1] = tmp;
print_array(array, size);
swapped = 1;
}
}
if (!swapped)
break;
}
}
