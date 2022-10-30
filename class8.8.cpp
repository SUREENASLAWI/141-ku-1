//sureen aslavi
//2221178157
//class8.8

#include <iostream>
using namespace std;

int main(){
	
	int t;
	
	for(t=1; t<=10; t++){
		
		if(t==5)
		   break;
		   
		cout << t << " ";   
	}
	
	cout << endl << "broke out of loop at count =  " << t <<endl;
	
	return 0;
}