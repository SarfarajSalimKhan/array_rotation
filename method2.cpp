#include <iostream>
using namespace std;

void array_insert ( int [ ], int );
void array_print ( int [ ], int );
void leftRotateArray ( int [ ], int, int );
void leftRotateArrayByOne ( int [ ], int );

int main ( )
{
    int size = 7;
    int arr [ size ];
    array_insert ( arr, size );
    array_print ( arr, size );
    int num;
    cout << "Enter number of elements to rotate : ";
    cin >> num;
    leftRotateArray ( arr, size, num );
    array_print ( arr, size );
    return 0;
}

void array_insert ( int arr [ ], int size )
{
    cout << "Enter elements of array" << endl;
    for ( int i = 0; i < size; i++ )
    {
        cin >> arr [ i ];
    }
}

void array_print ( int arr [ ], int size )
{
    cout << "Array is:";
    for ( int i = 0; i < size; i++ )
    {
        cout << "\t" << arr [ i ];
    }
    cout << endl;
}

void leftRotateArray ( int arr [ ], int size, int num )
{
    for ( int i = 0; i < num; i++ )
    {
        leftRotateArrayByOne ( arr, size );
    }
}

void leftRotateArrayByOne ( int arr [ ], int size )
{
    int temp = arr [ 0 ];
    for ( int i = 0; i < size - 1; i++ )
    {
        arr [ i ] = arr [ i + 1];
    }
    arr [ size - 1 ] = temp;
}
