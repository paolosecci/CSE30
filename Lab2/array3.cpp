#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main()
{
    
    int size;
    cout << "Enter size of 2D array: ";
    cin >> size;

    if (size > 0)
    {
        //initialize array n negative counter
        int array[size][size];
        int negatives = 0;

        //fill with input, count negatives
        for (int i = 0; i < size; i++)
        {
            cout << "Enter values of row " << i << " seperated by spaces: ";
            
            for (int j =0; j < size; j++)
            {
                cin >> array[i][j];
                if (array[i][j] < 0)
                {
                    negatives++;
                }
            }
        }
    
    
        //check negatives count and return info
        if (negatives == 0)
        {
            cout << "All values are positive" << endl;
        }
        else
        {
            cout << "There are " << negatives << " negative values in the 2D array" << endl;
        }
    }
    
return 1;
}
