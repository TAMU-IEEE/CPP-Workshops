#include <iostream>
#include <string>
#include <vector>

// ARRAYS

//five elements of type int
int my_array[5]; 

//initialized five elements of type int 
int my_array_2[5] = {5, 4, 7, 8, 2};

//initialized five elements of type int last two are 0’s
int my_array_3[5] = {5, 4, 7};

//universal array initialization
int my_array_4[] = {5, 4, 7, 8, 2};

//2-D array with height of 6 and width of 5 
int my_array_5[6][5];


// POINTERS

//pointer to an int
int *my_pointer;
void print(std::string *pointer) {
	std::cout << "Pointer: " << *pointer << std::endl;
}


// VECTORS
std::vector<int> my_Vector;

//Some Vector functions
std::my_Vector.push_back(60);
std::my_Vector[0];
std::my_Vector.size();
std::my_Vector.pop_back();

int main() {
    
  // --- Arrays ----
  int capacity = 5;
  std::string input;
  std::string movies[capacity];
  
  std::cout << "Please enter your 5 favorite movies.\n";
  
  for (int r = 0; r < capacity; r++) {
  	std::cout << r+1 << "? \n";
  	std::getline(std::cin, input);
  	movies[r] = input;
  }
  
  for (int r = 0; r < capacity; r++) {
  	std::cout <<"["<<r+1<<"]  "<< movies[r] << std::endl;
  }
  	
  	
  	// --- Pointers ---
  	int  var = 20;   // actual variable declaration.
  int  *ip;        // pointer variable
  ip = &var;       // store address of var in pointer variable
  
  // print the address stored in ip pointer variable
  std::cout << "Address stored in ip variable: ";
  std::cout << ip << std::endl;
  
  // access the value at the address available in pointer
  std::cout << "Value of *ip variable: ";
  std::cout << *ip << std::endl;
  
  std::string s1 = "Stop wishing. Start doing";
  std::string s2 = "Nothing worth having comes easy";
  
  std::string *p1 = &s1;
  std::string *p2 = &s2;
  
  print(p1);
  print(p2);
	
	// --- Vectors ---
	std::string inputs
	vector<string> movies;
	
	cout << "Please enter your 5 favorite movies.\n";
	
	for (int r = 0; r < 5; r++) {
		std::cout << r+1 << "? \n";
		std::getline(std::cin, inputs);
		movies.push_back(std::inputs);
	}
	
	return 0;

}
