/* CIS252-FinalProject.cpp : This file contains the 'main' function. Program execution begins and ends there. */
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

char* removeSpaces(char* str)
{
    int i = 0, j = 0;
    while (str[i])
    {
        if (str[i] != ' ')
            str[j++] = str[i];
        i++;
    }
    str[j] = '\0';
	
    return str;
}


/* Function to print reverse of the passed string */
void reverse(string str)
{
    if (str.size() == 0)
    {
        return;
    }
    reverse(str.substr(1));
	
    cout << str[0];
}

/* Driver program to test above function */


int main()
{
    std::cout << "Carol Sanders CIS 252 Word lIst Program to remove spaces between strings \n";

    ifstream wordList;
    ofstream wordListOut;
    wordList.open("wordList.txt");	
    wordListOut.open("wordListOut.txt");
	while (!wordList.eof())
	{
        char ltrs;
        wordList.get(ltrs);
        wordListOut << ltrs;
        cout << "Writing to file: " <<  ltrs << endl;
	}

    wordListOut.close();
    wordList.close();

    char str1[] = "gee    k   ";
    cout << removeSpaces(str1) << endl;

    char str2[] = " g e e k ";
    cout << removeSpaces(str2);

    string a = "Geeks for Geeks";
    reverse(a);
	
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
