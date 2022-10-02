#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

void del(int arr[], int &size, int index)
{
    if (index < size && index >= 0)
    {
        for (int i = index; i < size - 1; ++i)
            arr[i] = arr[i + 1];
        size--;
    }
    else
        cout << "please enter a valid index" << endl;
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
        printf("%d ", arr[i]);
    // cout << arr[i];
    // cout << endl;
    printf("\n");
}

int index(int arr[], int size, int num)
{
    for (int i = 0; i < size; ++i)
        if (arr[i] == num)
            return i;
    return -1;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void direction(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

void duplicate(int arr[], int size)
{
    int *A = new int[size];
    for (int i = 0; i < size - 1; ++i)
    {
        int count = 0;
        if (A[i] == -1)
            continue;
        for (int j = 0; j < size; ++j)
        {
            if (arr[i] == arr[j])
            {
                A[j] = -1;
                count++;
            }
        }
        if (count > 1)
        {
            cout << arr[i] << " : " << count << " times" << endl;
        }
    }
    delete[] A;
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1, 10, 12, 15, 1, 4, 3, 1, 10, 15, 15, 0, 0, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    print(arr, size);
    duplicate(arr, size);
    return 0;
}