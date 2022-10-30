//sureen aslavi
//2221189157
//class 6.3

//Write a program that asks the user for 10 grades (between 0 and 100), and calculates the average of the 10 grades

#include <iostream>
using namespace std;

int main(){
	
	//t=total
	//c=grade Counter
	//g=grade 
	
	int t=0;
	int c=1;
	
	while(c<=10){
		cout << "enter grade num: " << c << ": " ;
		int g;
		cin >>g ;
		t+=g;
		c++;
		
	}
	
	int average{t/10};
	
	cout << "total of all 10 grades is " << t << endl;
	
	cout << "class average is " << average ;
	
	return 0;
}