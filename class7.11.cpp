//sureen aslavi
//2221189157
//class 7.11

//Determine the output of the following program

#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int num=0;
	int sum=0;
	
	int list[]= {2, 10, 35, -1, 8 };
		
		for(int num : list){
			if((num%2)==0){
				num++;
				sum+= num;
			}
		}
	
	cout << num << " , " << sum << endl;
	
	return 0;
}