//sureen aslavi
//2221189157
//class 5.2

//Write a program to determine how much to tip the server in a restaurant. The tip should be 15% of the check, with a minimum of 0.750 KD

#include <iostream>
using namespace std;

int main(){
	
	cout << "enter the check amount in KD " ;
	
	double bill;
	cin >> bill;
	
	double tip= bill*0.15;
	
	if (tip<0.750){
		tip=0.750;
	}
	
	cout << "the tip should be : " << tip << " KD " << endl;
	
	return 0;
}