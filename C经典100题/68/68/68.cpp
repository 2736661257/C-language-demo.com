#include<stdio.h>
#include<stdlib.h>
int main()
{
	void print_arr(int array[], int n);
	void move(int array[], int n, int offset);
	int arr[20], i, n, offset;
	printf("total number?\n");
	scanf("%d", &n);
	printf("input %d numbers.\n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("set your offset.\n");
	scanf("%d", &offset);
	printf("offset is %d.\n",offset);
	print_arr(arr, n);
	move(arr, n, offset);
	print_arr(arr, n);
}
void print_arr(int array[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%4d", array[i]);
	}
	printf("\n");
}

void move(int array[], int n, int offset)
{
	int *p, *arr_end;
	arr_end = array + n;
	int last;
	while (offset)
	{
		last = *(arr_end - 1);
		for (p = arr_end - 1; p != array; p--)
		{
			*p = *(p - 1);
		}
		*array = last;
		offset--;
	}
}