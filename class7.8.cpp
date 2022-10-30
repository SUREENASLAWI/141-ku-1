//sureen aslavi
//2221189157
//class 7.8

//Write a program to remove all the letters ‘a’ and ‘A’ from a word entered by a user

#include <iostream>

using namespace std;

int main(){
	
	string name;
	
	cout << "Enter a word: " << endl;
	cin >> name;
	
	for(int i=0; i<=name.length(); i++){
		if(name[i] !='a' && name[i] != 'A'){
			cout << name[i] << " ";
		}
	}
	
	return 0;
}