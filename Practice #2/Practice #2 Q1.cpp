#include <iostream>
#include <iomanip>
using namespace std;
int txt();
int main(){
	

	
	// Calling the function
	
	
	txt();
	return 0; 

}
int txt()
	
	{float a,b,c,d,e;
	
	float const pi=3.1415;
	// taking Diameter 
	
	cout<<"diameter of the wheel : "<<endl;
	cin>>a;
	// taking speed
	
	cout<<"speed of the cycle : "<<endl;
	cin>>b;	
	// coverting into speed per min
	
	c=(b*1000)/60;
		// calculating  circumference 
	d=a*pi;

	
	cout<<"circumference of the cycle : "<<d<<endl;
	// revolution per min 
	e=c/d;
	
	
	cout<<"revolution per min : "<<setprecision(0)<<fixed<<e;
	return e;
	}
