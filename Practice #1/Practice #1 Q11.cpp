// PART 11


#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	//Initializing the values
	int a;
	int b;
	int c;
	//Displaying the values
	cout<<"Enter the Number  : "<<endl;
	cin>>a;
	cout<<"Enter the Number  : "<<endl;
	cin>>b;
	cout<<"Enter the Number  : "<<endl;
	cin>>c;
	
	// Displaying the Numbers, Square , Cube & Half
	cout<<"Variables"<<"     "<<"Number"<<"    "<<"Square"<<"    "<<"Cube"<<"    "<<"Half"<<endl;
	cout<<"a"<<setw(17)<<a<<setw(10)<<a*a<<setw(10)<<a*a*a<<setw(6)<<a/2<<endl;
	cout<<"b"<<setw(17)<<b<<setw(10)<<b*b<<setw(10)<<b*b*b<<setw(6)<<b/2<<endl;
	cout<<"c"<<setw(17)<<c<<setw(10)<<c*c<<setw(10)<<c*c*c<<setw(6)<<c/2<<endl;

	return 0;

}
