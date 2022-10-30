//sureen aslavi
//2221189157
//class8.5

#include <iostream>
using namespace std;

int main(){
	
	char oper;
	float num1, num2;
	
	cout << "enter an operator (+, -, *, /): ";
	cin >> oper;
	
	cout << "enter two num: ";
	cin >> num1 >> num2;
	
	switch (oper){
		case '+':
			cout << num1 << " + " << num2 << " = " << num1+num2;
			break;
			
		case '-':
			cout << num1 << " - " << num2 << " = " << num1-num2;
			break;
			
		case '*':
			cout << num1 << " * " << num2 << " = " << num1*num2;
			break;
			
		case '/':
			cout << num1 << " / " << num2 << " = " << num1/num2;
			break;
			
		default:
			cout << "error ... the operator is not correct";		
		
	}
	
	return 0;
}