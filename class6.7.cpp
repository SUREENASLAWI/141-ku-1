//sureen aslavi
//2221189157
//class 6.7


#include <iostream>
using namespace std;

int main(){
	
	cout << "enter a num from the menu to learn about kuwait" << endl;
	
	cout <<"1- capital city" << endl;
	cout <<"2- independence day "<< endl;
	cout << "3- official languge" << endl;
	cout << "4- population " << endl;
	cout << "5- quit" << endl;
	
	while(true){
		cout << "make a selection from the menu: ";
		int num;
		cin >> num;
		
		//we can use switch also
		
		if(num==1){
			cout << "kuwait city" << endl;
			}
		else if(num==2){
			cout << "February 25" << endl;
		}
		else if(num==3){
			cout << "Arabic" << endl;
		}
		else if(num==4){
			cout << "4.5 million" << endl;
		}
		else if(num==5){
			break;
		}
			
	}
	
	
	
	return 0;
}