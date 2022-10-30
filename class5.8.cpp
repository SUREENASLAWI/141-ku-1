//sureen aslavi
//2221189157
//class 5.8

//A company will give a bonus of 5% to employees if their year of service is more than 5 years, else 2% bonus, Ask user for their salary and year of service and print the net bonus amount.

#include <iostream>
using namespace std;

int main(){
	
	cout << "plesae enter salary and years of service: ";
	int salary, service;
	cin >> salary >> service;
	
	double bonus;
	
	if(service >5){
		bonus= salary * 0.05;
	}

	else{
		bonus=salary*0.02;
	}
	
	cout << "your bonus is: " << bonus;
	return 0;
}