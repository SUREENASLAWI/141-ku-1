//sureen aslavi
//2221189157
//class 5.5

//Ask user to enter a student grade, If student’s grade is greater than or equal to 60, then print “Passed”,Else, print “Failed” and also print “You must take the course again”


#include <iostream>
using namespace std;

int main(){
	cout << "please enter a student grade: " ;

// g = greade	
	int g;
	cin >> g;
	
	if (g>=60){
		cout << "passed " << endl;
	}
	
	else {
		cout << "failed" << endl;
		cout << "You must take the course again" << endl;
	}
	
	
	return 0;
}
