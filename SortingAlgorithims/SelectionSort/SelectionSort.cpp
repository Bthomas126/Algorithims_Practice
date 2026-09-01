#include <iostream>

//returns the smallest element within the given array
int findSmallestEllement(int arr[], int size)
{
    //sets the current smallest elemnt to the first element in the array
    int small = arr[0];
    //iterates through each element of the array and compares them
    for(int i = 0; i < size; i++)
        if(small > arr[i])
        {
            small = arr[i];
        } 

    return small;
}

void print(int arr[], int size)
{
    std::cout << "[";
    for(int i = 0; i < size; i ++)
    {
        std::cout << " " << arr[i] << " ";
    }
    std::cout << "]";
}

//selection sort proccess
void selectionSort(int arr[], int size)
{
    //base case only one element left
    if(size <= 1)
    {
        return;
    }
    //call helper smallest function
    int smallest = findSmallestEllement(arr, size);
    
    //keep track of the smallest index
    int smallestIndex;
    //finds index of the smallest element
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == smallest)
        {
            smallestIndex = i;
            break;
        }
    }

    arr[smallestIndex] = arr[0];
    arr[0] = smallest;
    selectionSort(arr + 1, size - 1);
    return;

}

int main()
{
    int size;

    std::cout << "Enter the desired size of your integer array: ";
    std::cin >> size;

    int* arr = new int[size];

    for(int i = 0; i < size; i++)
    {
        std::cout << "Enter number " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    selectionSort(arr, size);

    print(arr, size);

    delete[] arr;

    return 0;
}