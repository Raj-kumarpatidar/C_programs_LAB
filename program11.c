// insertion sort

#include <stdio.h>
#include <conio.h>


void insertionSort(int arr[], int n)
{
	
	if (n <= 1) {
		return;
	}
	
	
	insertionSort(arr, n - 1);
	
	
	int last = arr[n - 1];
	int j = n - 2;
	
	
	while (j >= 0 && arr[j] > last)
	{
		arr[j + 1] = arr[j];
		j--;
	}
	
	
	arr[j + 1] = last;
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
        printf("%d  ",arr[i]);
		
	}

}

void main()
{
	int  arr[] = {12, 56, 3, 7, 9, 35, 11, 19, 25, 75};
	int n = 10;

	insertionSort(arr, n);

	printArray(arr, n);

	
}

