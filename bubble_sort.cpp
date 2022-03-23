#include <iostream>
#include <ctime>

const int SIZE = 10;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void BubbleSort(int arr[]) 
{
    for (int i = 0; i < SIZE-1; i++)
        for (int j = 0; j < SIZE-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

void PrintArray(int arr[])
{
    int i;
    for (i = 0; i < SIZE; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main(int argc, char *argv[])
{
    srand(time(NULL));
    int arr [SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 100;
    }
    BubbleSort(arr);
    PrintArray(arr);
    return 0;
}