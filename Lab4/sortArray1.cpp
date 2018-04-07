#include <iostream>
#include <string>
using namespace std;

//declare sortArr
int sortArr(bool isIncreasing, int array[], int arrSize);

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
    
    sortArr(isAscending, a, size);
    
}//end main


//sortArr
int sortArr(bool isIncreasing, int array[], int arrSize)
{
    
    //selection sort ascending
    if (isIncreasing)
    {
        //sort
        int minSpot;
        for (int i = 0; i < arrSize - 1; i++)
        {
            minSpot = i;
            for (int j = i+1; j < arrSize; j++)
            {
                if (array[j] < array[minSpot])
                {
                    minSpot = j;
                }
                
            }
            if (minSpot != i)
            {
                swap (array[i], array[minSpot]);
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
    
    //selection sort descending
    else
    {
        //sort
        int maxSpot;
        for (int i = 0; i < arrSize - 1; i++)
        {
            maxSpot = i;
            for (int j = i+1; j < arrSize; j++)
            {
                if (array[j] > array[maxSpot])
                {
                    maxSpot = j;
                }
            
            }
            if (maxSpot != i)
            {
                swap (array[i], array[maxSpot]);
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
    
}//end sortArr
