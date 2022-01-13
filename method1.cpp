#include <iostream>
using namespace std;

void insertArray(int [], int);
void printArray(int [], int);
void rotateArray(int [], int, int);

int main()
{
    const int size = 7;
    int arr[size];
    insertArray(arr, size);
    printArray(arr, size);
    int num;
    cout << endl << "Enter number of elements to rotate : ";
    cin >> num;
    rotateArray(arr, size, num);
    printArray(arr, size);
    return 0;
}

void insertArray(int arr[], int size)
{
    cout << "Enter elements of array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void printArray(int arr[], int size)
{
    cout << "Array is :";
    for (int i = 0; i < size; i++)
    {
        cout << "\t" << arr[i];
    }
}

void rotateArray(int arr[], int size, int num)
{
    int temp[num];
    for (int i = 0; i < num; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i + num];
    }
    int count = 0;
    for (int i = size - num; i < size; i++)
    {
        arr[i] = temp[count];
        count++;
    }
}
