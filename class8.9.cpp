//sureen aslavi
//2221178157
//class8.9

#include <iostream>
using namespace std;

int main(){
	
	int t;
	
	for(t=1; t<=10; t++){
		
		if(t==5)
		   continue;
		   
		cout << t << " ";   
	}
	
	cout << endl << "used continue to skip printing 5 " <<endl;
	
	return 0;
}