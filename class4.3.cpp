//sureen aslavi
//2221189157
//class 4.3

#include <iostream>
using namespace std;

int main(){
	
	int x=0;
	int y=0;
	int z=0;
	
	cout << "input three different integers: " << endl;
	cin >> x >> y >> z; 
	
	cout << "sum is " << (x + y + z) << endl;
	cout << "average is " << ( (x + y + z) / 3) <<endl;
	cout << "product is " << (x*y*z) << endl;
	
	if ((x<y) && (x<z)) {
		cout << "smallest is " << x << endl;
	}
	
	if ((y<x) && (y<z)) {
		cout << "smallest is " << y << endl;
	}
	
	if( (z < x ) && (z < y)) {
		cout << "smallest is " << z << endl;
	}
	return 0;
}