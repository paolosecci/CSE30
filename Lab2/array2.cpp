#include <iostream>
using namespace std;
int main()
{
cout << "Enter string that u wanna flip: ";
string word;
cin >> word;

    string returnString;
for (int i = word.length()-1; i >=0; i--)
{
    returnString += word[i];
}

cout << returnString << endl;
    
return 1;
}
