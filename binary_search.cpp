#include <iostream>

int binary_search(int* array, int len, int number)
{
	int low_index = 0;
	int high_index = len - 1;
	int index;
	while (low_index <= high_index)
	{
		index = (low_index + high_index)/2;
		if (array[index] == number)
			return index;
		if (array[index] < number)
			low_index = index + 1;
			
		else high_index = index - 1;
	}
	return -1;
}

int main()
{
	int a[] = { 1, 2, 4 };
	int len = sizeof(a) / sizeof(a[0]);
	std::cout << binary_search(a, len, 3);
	return 0;
}
