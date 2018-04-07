#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

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
}