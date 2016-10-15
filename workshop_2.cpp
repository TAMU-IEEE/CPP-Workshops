/*
	IEEE TAMU C++ Workshop #2
	Oneal Abdulrahim
*/
#include <iostream>
#include <string>
using namespace std;

/// repeat a word
/**
This method prints a string, line by line, a given number of times.
@param times	The number of times to print the string
@param s		The string to print
@return void 	Does not return anything
*/
void repeat_word(int times, string s) {
	// this loop goes from 1 until whatever "times" is
	// Can you convert this to a while loop?
    for (int i = 1; i <= times; ++i) {
        cout << s << endl;
    }
}

/// add two objects
/**
This method adds two objects together using the "+" operator. This means
that whatever operation is defined for "plus", it will be performed. This
is because the method is templated, meaning it can deal with any data type,
as long as C++ knows what to do with "+".
@param a	The first object
@param b	The second object
@return 	The sum of a and b
*/
template <class T>
T addition(T a, T b) {
    return a + b;
}

int main()
{
	// Part 1 Structures and Loops---------------------------------------------
	cout << "\n*** Part 1 ***" << endl;
	
	// declare new integer for the user's choice
	int num_choice;
	
	// give the user some choices, basically a small menu
	// printing strings
	cout << "What's cooler than being cool?" << endl;
	cout << "Enter: [1] Ice Cold [2] This Workshop [3] IEEE\n\n";
	
	/* This loop is a special way of continuing to run,
	 AS LONG AS num_choice INPUT IS VALID, CONTINUE RUNNING.
	 
	 A valid input is anything we can store in "int". If we 
	 use a numeric type (as pointed out in class), it will truncate
	 to an integer (for example, 2.1 will truncate to 2)
	*/
	while (cin >> num_choice) {
		
		// Basically a big if --> else block, relying on num_choice
		switch (num_choice) {
			// exactly the same as saying:
			// if (num_choice == 1)
			case 1:
				for (int i = 0; i <= 9; ++i) {
					cout << "Alright..." << endl;
				}
				break; // we must break so that code below does not execute
			// elseif (num_choice == 2)
			case 2:
				cout << "What a nerd!" << endl;
				break;
			// elseif (num_choice == 2)
			case 3:
				cout << "Thanks, you're pretty cool, too!" << endl;
				break;
			// else
			default:
				cout << "Please enter in a valid integer!" << endl;
				break;
		}
	}
	
	// Part 2 -----------------------------------------------------------------
	cout << "\n*** Part 2 ***" << endl;
	
	// Calling the method repeat_word with the parameters 10 and "Hello"
	// See the above definition, since we must put it before main
	repeat_word(10, "Hello!");
	
	// Part 3 -----------------------------------------------------------------
	cout << "\n*** Part 3 ***" << endl;
	// We are calling the templated method with a type int
	int one = 20;
	int two = 10;
	
	// Replaces every "T" with "int"
	int answer = addition<int>(one, two);
	cout << answer;
	
	return 0;
}
