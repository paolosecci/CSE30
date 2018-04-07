#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{

	string arr1;
	int size;
	cout << "Enter the  size of the array: ";
	cin >> size;
	if(size > 0)
	{
		int array1[size];
		cout << "Enter the numbers in the array, separate by space, and press enter: ";
		cin >> arr1;
		for(int i = 0; i < size -1; i++)
		{
	 	scanf("%d", &array1[i]);
		}
		int check;
		for(int i = 0; i < size - 1; i++)
		{
			if(array1[i] > array1[i+1])
			{
				check = 1;
			}
		}
		if(check == 1)
		{
			cout << "This is NOT an increasing array! ";
		}
		else
		{
			cout << "This is an increasing array! ";
		}

	}
	else
	{
  		cout << "You entered an incorrect value for the array list! ";
	}
	return 0;
}
