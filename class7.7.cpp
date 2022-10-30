//sureen aslavi
//2221189157
//class 7.7

//Write a program to output the values of y in the equation y = x2 for x integer values from -5 to 5
//Example output > 25 16 9 4 1 4 9 16 25


#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	for(int x=-5; x<=5; x++){
		int y= pow(x, 2);
		cout << y << " ";
	}
	
	return 0;
}