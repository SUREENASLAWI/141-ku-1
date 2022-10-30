//sureen aslavi
//2221189157
//class 8.6

#include <iostream>
using namespace std;

int main(){
	
	cout << "enter your grade: ";
	
	char g;
	cin >> g;
	
	switch(g){
		case 'A':
			cout << "excellent" ;
			break;
			
		case 'B': ;
		case 'C' : 
		 cout << "well done";
		 break;
		 
		case 'D':
		 cout << "you passed";
		 break;
		 
		 case 'F':
		 	cout << "brtter try again";
		 	break;
		 	
		 default :
		  cout << "invaild grade";	
		 
		 
		
	}
	
	return 0;
}