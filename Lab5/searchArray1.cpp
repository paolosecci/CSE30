#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

//declare functions
int checkArrSort(string* arr, int arrSize);
int binarySearchR(string* arr, int start, int end, string key);


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
    if (binarySearchR(arr, 0, lineCount, key) != -1)
    {
        cout << "key (" << key << ") found at index " << binarySearchR(arr, 0, lineCount, key) << endl;
        file_out << "key (" << key << ") found at index " << binarySearchR(arr, 0, lineCount, key) << endl;
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

int binarySearchR(string* arr, int start, int end, string key)
{
    //when no key exists
    if (start > end)
    {
        return -1;
    }
    //get mid val
    int mid = (start + end)/2;
    
    //found key
    if (key == arr[mid])
    {
        return mid;
    }
    else if (key > arr[mid])
    {
        return binarySearchR(arr, mid + 1, end, key);      //Rstart <= mid + 1
    }
    else
    {
        return binarySearchR(arr, start, mid - 1, key);    //Rend <= mid - 1
    }
}//end binarySearchR

