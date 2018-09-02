/*  A C++ program to find the grade obtained by a student when marks is entered - using if else statement */

#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
	//declaration of variable to hold the marks
	double marks;
	cout<<"Hi, welcome to the Grade calculator"<<endl;
	cout<<"Please enter your marks here: ";
	cin>>marks;
	
	//conditional statement using if else
	if (marks >= 80.00 && marks <= 100.00) {
		cout<<"You had A"<<endl;
	} else if(marks >= 75.00 && marks <= 79.00) {
		cout<<"You had B+"<<endl;
	} else if(marks >= 70.00 && marks <= 74.00) {
		cout<<"You had B"<<endl;
	} else if(marks >= 65.00 && marks <= 69.00) {
		cout<<"You had C+"<<endl;
	} else if(marks >= 60.00 && marks <= 64.00) {
		cout<<"You had C"<<endl;
	} else if(marks >= 55.00 && marks <= 59.00) {
		cout<<"You had D+"<<endl;
	} else if(marks >= 50.00 && marks <= 54.00) {
		cout<<"You had D"<<endl;
	} else if(marks >= 45.00 && marks <= 49.00) {
		cout<<"You had E"<<endl;
	} else if(marks >= 0.00 && marks <= 44.00) {
		cout<<"You had F"<<endl;
	} else {
		cout<<"You entered an invalid mark"<<endl;
	}
	return 0;
}
