#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{
    //get user input to create array
    int arrSize;
    cout << "Enter array size: ";
    cin >> arrSize;
    
    //check if acceptable user input
    if (arrSize <= 0)
    {
        cout << "ERROR: Invalid array size";
        return -1;
    }
    
    //create array
    int array[arrSize];
    
    //fill array
    cout << "Enter values of array seperated by a space: ";
    for (int i = 0; i < arrSize; i++)
    {
        cin >> array[i];
    }
    
    //selection sort
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
    cout << "This is the sorted array in descending order: " << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cout << array[i] << "\t";
    }
    
    //output algorithms using of min/max
    cout << endl << "The algorithm selected the minimum for the traverse of the array" << endl;
    
    
    return 1;
}
