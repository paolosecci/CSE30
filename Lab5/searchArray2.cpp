#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

//declare functions
int checkArrSort(string* arr, int arrSize);
int binarySearchL(string* arr, int arrSize, string key);


int main(void)
{
    
//INPUT
    //declare stuff
    ifstream file_in;
    file_in.open ("words_in.txt");
    string str;
    
    //check if wrong
    if (!file_in.is_open())
    {
        cout << "Error: could not open file" << endl;
        return 0;
    }
    
    //count how many lines
    int lineCount = 0;
    while (!file_in.eof())
    {
        getline(file_in, str);
        lineCount++;
    }
    file_in.close();
    
    //declare array
    string *arr = new string [lineCount];
    
    //get stuff into array
    file_in.open("words_in.txt");
    for (int i = 0; i < lineCount; i++)
    {
        file_in >> arr[i];
    }
    file_in.close();
    
//SEARCH_ARR
    //declare stuff
    string key;
    
    //check if out of order
    if (checkArrSort(arr, lineCount) == 0)
    {
        cout << "ERROR: array not in order" << endl;
        return -1;
    }
    
//OUTPUT
    //declare stuff
    ofstream file_out;
    file_out.open ("words_out.txt");
    
    //send array's data to words_out
    for (int i = 0; i < lineCount; i++)
    {
        file_out << arr[i] << endl;
    }
    file_out.close();
    
    //ask user for key
    cout << "Enter key to search for: " << endl;
    cin >> key;
    
    //send stuff to outgoing file
    if (binarySearchL(arr, lineCount, key) != -1)
    {
        cout << "key (" << key << ") found at index " << binarySearchL(arr, lineCount, key) << endl;
        file_out << "key (" << key << ") found at index " << binarySearchL(arr, lineCount, key) << endl;
    }
    else
    {
        cout << "key (" << key << ") not found in array" << endl;
        file_out << "key (" << key << ") not found in array" << endl;
    }
    
    file_out.close();
}//end main

int checkArrSort(string* arr, int arrSize)
{
    bool asc = true;
    bool des = true;
    
    //check if descending
    for (int i = 0; i < arrSize - 2; i++)
    {
        if (arr[i] < arr[i+1])
        {
            des = false;
            break;
        }
    }
    
    if (!des)
    {
        //check if ascending
        for (int i = 0; i < arrSize - 2; i++)
        {
            if (arr[i] > arr[i+1])
            {
                asc = false;
                break;
            }
        }
    }
    else
    {
        asc = false;
    }
    
    //return -1 for ascending
    if (asc)
    {
        return 1;
    }
    //return 1 for descending
    else if (des)
    {
        return -1;
    }
    //return 0 if anything else
    else
    {
        return 0;
    }
}//end checkArrSort

int binarySearchL(string* arr, int arrSize, string key)
{
    int start = 0;
    int end = arrSize;
    int mid;
    
    //look for key in arr
    while (start <= end)
    {
        mid = (start + end)/2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
    
}//end binarySearchL