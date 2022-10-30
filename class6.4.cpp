//sureen aslavi
//2221189157
//class 6.4

#include <iostream>
using namespace std;

int main(){
	
	int t=0;
	int c=0;
	
	cout << "enter grade or -1 to quit: ";
	
	int g;
	cin >> g;
	
	while (g!=-1){
		t+=g;
		c++;
		cout << "enter grade or -1 to quit: ";
		cin >> g;
	}
	
	if(g!=0){
		double a = t/c;
		cout << "total of the " << c << " grades is " << t << endl;
		cout << "class average is " << a << endl;
	}
	
	else{
		cout << "no grades were entered" << endl;
	}
	
	
	
	return 0;
}