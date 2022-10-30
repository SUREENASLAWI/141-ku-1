//sureen aslavi
//2221189157
//class 8.2+3

//Write a program that asks a user to enter a number with 3 digits. If they do not, keep asking them to enter a number with 3 digits until they get it right.

#include <iostream>
using namespace std;

int main(){
	
	int num;
	
	cout << "input a number that has 3 digits: ";
	cin >> num;
	
	while(num <=99 || num>=1000){
		cout << "input a number that has 3 digits: ";
		cin >> num;
	} 
	
//with do while 
	
//	do{
//		cout << "input a number that has 3 digits: ";
//	    cin >> num;
//	}while(num <=99 || num>=1000){
	
	return 0;
}