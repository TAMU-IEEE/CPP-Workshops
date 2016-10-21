#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

struct Student {
	string name;
	int age;
	
	Student(string n, int a) : name(n), age(a) {}
};

int main() {
	ifstream file_input;
	file_input.open("list.txt");
	
	vector<Student> student_data;
	string file_name_data;
	string file_age_data;
	
	if (file_input.is_open()) {
		while(file_input >> file_name_data >> file_age_data) {
			Student temp(file_name_data, stoi(file_age_data));
			student_data.push_back(temp);
		}
	}
	
	for (int i = 0; i < student_data.size(); ++i) {
		cout << student_data[i].name << " is " << student_data[i].age << " years old." << endl;
	}
	
	file_input.close();
	
	return 0;
}