#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

//declare checkSortArr
int checkArrSort(string* arr, int arrSize);


int main(void)
{
    
//INPUT
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
    
//OUTPUT
    ofstream file_out;
    file_out.open ("words_out.txt");
    
    //send array's data to words_out
    for (int i = 0; i < lineCount; i++)
    {
        file_out << arr[i] << endl;
    }
    file_out.close();
    
    
//print based on checkArrSort'z return
    if (checkArrSort(arr, lineCount) == 1)
    {
        cout << "The array is sorted in ascending order" << endl;
    }
    else if (checkArrSort(arr, lineCount) == -1)
    {
        cout << "The array is sorted in descending order" << endl;
    }
    if (checkArrSort(arr, lineCount) == 0)
    {
        cout << "The array is out of order" << endl;
    }
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
