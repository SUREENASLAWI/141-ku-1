//sureen aslavi
//2221189157
//class 5.7

//Ask user to enter 2 numbers, Print the bigger number

#include <iostream>
using namespace std;

int main(){
	
	cout << "please enter 2 numbers: " ;
	int num1, num2;
	
	cin >> num1 >> num2;
	
	if (num1>num2){
		cout << "the bigger is: " << num1 ;
	}
	else if(num2>num1){
	    cout << "the bigger is: " << num2 ;
	}
	else{
		cout << "the two numbers are equal " ;
	}
	
	
	return 0;
}