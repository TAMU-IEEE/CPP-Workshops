/*
IEEE TAMU C++ Workshop #1
Basics of Cpp

Oneal Abdulrahim */

#include <iostream> // allows us to input and output
#include <string> // allows us to use strings

/* not entirely necessary, but tell the compiler 
   that symbol names defined in the std namespace 
   are to be brought into your program's scope */
using namespace std;

// our program will look to main to execute code first
int main() {
	string user_name; // declare new string
	
	cout << "Who are you? "; // Asks question, "endl" makes new line
	cin >> user_name; // get's user name
	
	// \n breaks the line, so we have a new line before the text is printed
	cout << "\nHe is Mi, I am Yu... and you are " << user_name << endl;
	
	int yu_confusion{0}; // int yu_confusion = 0;
	int user_confusion = 10; // standard initialization
	
	// Ask user to give us an integer, load it into yu_confusion
	cout << "How confused is Yu? (0 - 100) ";
	cin >> yu_confusion;
	
	// The user confusion is multiplied by yu_confusion
	user_confusion *= yu_confusion;
	
	// Display final result
	cout << "Mi is " << yu_confusion << "% confused, and you are "
		 << user_confusion << "% confused..." << endl;
	
	return 0;
}