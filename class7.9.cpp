//sureen aslavi
//2221189157
//class 7.9

//Print the years that end in 2 or 6 between 2000 and 2022
//Example output > 2002 2006 2012 2016 2022

#include <iostream>
#include <string>

using namespace std;

int main(){
	
	for(int n=2000; n<=2022; n++){
		
		int y=n%10;
		
		if(y==2 || y==6){
			
			cout << n << " " ;
			
		}
		
	}	
	
	return 0;
}