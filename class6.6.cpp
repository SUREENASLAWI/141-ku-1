//sureen aslavi
//2221189157
//class 6.6

//Print all even numbers 0 – 20 except 16

#include <iostream>
using namespace std;

int main(){
	
	int num=0;
	while(num <=20){
		if((num%2) ==0){
			if(num !=16){
				cout << num << endl;
			}
		}
		num++;
	}
	
	return 0;
}