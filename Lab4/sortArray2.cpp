#include <iostream>
#include <string>
using namespace std;

//declare InsertionSort
int insertionSort(bool isIncreasing, int array[], int arrSize);

//main method
int main()
{
    //get user input to create array
    int size;
    cout << "Enter array size: ";
    cin >> size;
    
    //check if acceptable user input
    if (size <= 0)
    {
        cout << "ERROR: Invalid array size" << endl;
        return -1;
    }
    
    //create array
    int a[size];
    
    //fill array
    cout << "Enter values of array seperated by a space: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    
    //ask whether ascending or descending
    bool isAscending;
    
    cout << "Enter 1 for ascending, Enter 0 for descneding: " << endl;
    int input;
    cin >> input;
    if (input == 1)
    {
        isAscending = true;
    }
    else if (input == 0)
    {
        isAscending = false;
    }
    else
    {
        return -1;
    }
    
    insertionSort(isAscending, a, size);
    
}//end main


//InsertionSort
int insertionSort(bool isIncreasing, int array[], int arrSize)
{
    
    //insertion sort ascending
    if (isIncreasing)
    {
        //sort
        for (int i = 1; i < arrSize; i++)
        {
            for (int j = i; j > 0; j--)
            {
                if (array[j] < array[j-1])
                {
                    swap (array[j], array[j-1]);
                }
            }
        }
        
        //output resulting array
        cout << "This is the sorted array in ascending order: " << endl;
        for (int i = 0; i < arrSize; i++)
        {
            cout << array[i] << "\t";
        }
        cout << endl;
        
        //return 1 for ascending
        return 1;
    }
    
    //insertion sort descending
    else
    {
        //sort
        for (int i = 1; i < arrSize; i++)
        {
            for (int j = i; j > 0; j--)
            {
                if (array[j] > array[j-1])
                {
                    swap (array[j], array[j-1]);
                }
            }
        }
        
        //output resulting array
        cout << "This is the sorted array in descending order: " << endl;
        for (int i = 0; i < arrSize; i++)
        {
            cout << array[i] << "\t";
        }
        cout << endl;
        
        //return 0 for descending
        return 0;
    }
    
}//end insertionSort
