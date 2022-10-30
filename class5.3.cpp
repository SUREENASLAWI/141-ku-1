//sureen aslavi
//2221189157
//class 5.3

//A copy center charges 50 fils per copy for the first 100 copies and 10 fils per copy for each additional copy. Write a program that requests the number of copies as input and displays the total cost.


#include <iostream>
using namespace std;

int main(){
	cout << "enter number of copies: ";
	
	int copies;
	cin >> copies;

	double cost;
	
	if (copies < 100){
		cost = 0.05*copies;
	}
	
	else{
		cost = (100*0.05) + (copies - 100) *0.01;
	}
	
	cout << "cost is " << cost << " KD";

	return 0;
}