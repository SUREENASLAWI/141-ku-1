//sureen aslavi
//2221189157
//class 5.6

//Ask user to enter a student grade
//If student’s grade is greater than or equal to 90, then print “A”
//If student’s grade is >= 80 and < 90, then print “B”
//If student’s grade is >= 70 and < 80, then print “C”
//If student’s grade is >= 60 and < 70, then print “D”
//If student’s grade is < 60 then print “F”

#include <iostream>
using namespace std;

int main(){
	
	cout << "enter a student grade: " ;
	int g;
	cin >> g;
	
	if (g>=90){
		cout << "A" ;
	}
	
	else if (g>=80){
		cout << "B" ;
	}
	
	else if (g>=70){
		cout << "C" ;
	}
	else if (g>=60) {
		cout << "D" ;
	}
	
	else {
		cout << "F";
	}
	return 0;
}