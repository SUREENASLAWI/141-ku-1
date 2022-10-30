//sureen aslavi
//2221189157
//class 8.7

#include <iostream>
using namespace std;

int main(){
	
	bool done;
	
	do{
		
		done = true;
		
		cout << "enter 1, 2 or 3: ";
		int choice;
		cin >> choice;
		
		switch(choice){
			case 1:
				cout << "choice 1";
				done = true;
				break;
				
			case 2:
				cout << "choice 2";
				done= true;
				break;
			
			case 3:
				cout << "choice 3";
				done= true;
				break;	
				
			default:
			 cout << "not 1, 2 or 3" << endl;
			 done=false;
					
				
		}
		
	}while(done!=true);
	
	return 0;
}