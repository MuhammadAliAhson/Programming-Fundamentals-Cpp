#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double a=34.789;
	double b=7.0;
	double c=5.789e+12;
	double d=67;
	cout<<setw(9)<<setprecision(4)<<a<<endl;
	cout<<setw(5)<<setprecision(4)<<b<<endl;
	cout<<fixed<<c<<endl;
	cout<<left<<setw(7)<<d;
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
