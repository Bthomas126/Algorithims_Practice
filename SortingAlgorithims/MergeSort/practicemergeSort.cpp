#include <iostream>

void mergeSort(int arr[], int size)
{

    if(size <= 1)
    {
        return;
    }
    //slits array size in half
    int spilt = size / 2;
    //left half
    mergeSort(arr, split);
    //right half
    mergeSort(arr + split, size - split);
}


void merge(int arr[], int leftSize, int rightSize)
{
    int left = 0;
    int right = 0;
    int merged = 0;

    int totalsize = leftSize + rightSize;

    int temp* = new int[totalsize];
}

int main()
{

    return 0;
}