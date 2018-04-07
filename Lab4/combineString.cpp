#include <iostream>
#include <string>
using namespace std;


string combineStr(string str, int times);

int main()
{
	//declare str and int inputs
	string inputStr;
	int inputInt;

	//get string input
	cout << "Enter string: " << endl;
	cin >> inputStr;

	//get int input
	cout << "Enter number of times" << endl;
	cin >> inputInt;

	//check if inputInt is 0
	if (inputInt == 0)
	{
		return 0;
	}	

	//run + print combineStr
    cout << "The resulting string is: " << endl << combineStr(inputStr, inputInt) << endl;
	
}

string combineStr(string str, int times)
{
    //declare an empty returnString
    string returnString;
    
	for (int i = 0; i < times; i++)
	{
		returnString += str;
	}

	return returnString;
}
