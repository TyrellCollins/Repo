// HelloApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h" //precompiled header, providing an intermediate form that is faster for the compiler to process
#include <iostream> //iostream uses the objects: cin, cout, cerr and clog for sending data to/from stndard streams input,output,error(unbuffered) and log(buffered). These are a part of std namepsace.
using namespace std; //namespace is used as a logical way to organize code when using multiple libraries.

int main()
{
    
	cout << "Hello\n"; //console output (aka serial print) message "Hello"
	return 0; //Return 0 so this program can safely end without errors (hopefully)
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
