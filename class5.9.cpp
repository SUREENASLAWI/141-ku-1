//sureen aslavi
//2221189157
//class 5.9

//Write a program to print the absolute value of a number entered by user. 

#include <iostream>
using namespace std;

int main(){
	
	cout << "please enter a number: ";
	int x;
	cin >> x;
	
	if (x<0){
		x=x*(-1);
	}
	
	cout << "the absolute value is: " << x ;
	
	return 0;
}