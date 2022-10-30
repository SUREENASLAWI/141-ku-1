//sureen aslavi
//2221189157
//class 7.6

//Write a while loop and for loop program that prints the values from 1 to 128, in multiples of 2
//Example output > 1 2 4 8 16 32 64 128

#include <iostream>
using namespace std;

int main(){
	
	for(int i=1; i<=128; i*=2){
		cout << i << " ";
	}
	
	return 0;
}
