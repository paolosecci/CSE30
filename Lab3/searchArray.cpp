#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
	//get user input for size of array
	int arrSize;
	cout << "Enter size of array: " << endl;
	cin >> arrSize;

	//check if acceptable user input
	if (arrSize <= 0)
	{
		cout << "ERROR: Invalid array size" << endl;
		return -1;
	}
	
	//create array
	int array[arrSize];

	//fill array
	cout << "Enter values of array, seperated by a space: " << endl;
	for (int i = 0; i < arrSize; i++)
	{
		cin >> array[i];
	}

	//get value to search for
	int v;
	cout << "Enter value to search for in the array: " << endl;
	cin >> v;

	//search and count
	int searchCount = 1;
	bool vFound = false;
	int vSpot;
	for (int i = 0; i < arrSize; i++)
	{
		if (v == array[i])
		{
			vFound = true;
			vSpot = i;
			break;		
		}
		searchCount++;
	}

	//print results
        if (vFound)
        {
                cout << "Found value " << v << " at index " << vSpot << ", which took " << searchCount << " checks." << endl;
        }
        else
        {
                cout << "No value equal to " << v << " in array" << endl;
		return 0;
        }

	//check for best/worst case scenario
	if (searchCount == 1)
	{
		cout << "We ran into the best case scenario!" << endl;
	}
	else if (searchCount == arrSize)
	{
		cout << "We ran into the worst case scenario!" << endl;
	}	

return 1;
}
